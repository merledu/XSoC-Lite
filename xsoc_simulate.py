#!/usr/bin/env python3
"""
XSoC simulation script.
Compiles and simulates the XSoC system with BabyKyber accelerator.
Outputs are stored in the 'output' folder in the repository root.
"""
from os.path import \
    dirname, \
    abspath, \
    join, \
    isdir, \
    split, isfile, basename
from subprocess import run
from argparse import ArgumentParser
from sys import exit
from shutil import rmtree, copy
from os import walk, makedirs, chdir
from re import search
import glob

ROOT = dirname(abspath(__file__))

def execute_sp(cmd, **kwargs):
    exec_sp = run(cmd, **kwargs)
    exec_sp.check_returncode()
    if exec_sp.returncode != 0:
        exit(1)

if __name__ == '__main__':
    parser = ArgumentParser()
    parser.add_argument('prog', nargs='*', help='Path to RISC-V assembly or C program(s)')
    parser.add_argument(
        '--timing',
        action='store_const',
        const='--timing',
        help='Enable timing support'
    )
    args = parser.parse_args()
    if not args.prog or len(args.prog) == 0:
        # Default to kyber_demo.c if no arguments given
        default_prog = join(ROOT, 'XSoC-SDK', 'examples', 'kyber_demo.c')
        print(f"[XOSCsimulate.py] No arguments given. Running default: {default_prog}")
        args.prog = [default_prog]
        print("(To run a different test, pass a path as argument.)")
    prog_name = split(args.prog[0])[-1]
    # Output directory in root level 'output' folder
    output_dir = join(ROOT, 'output')
    if isdir(output_dir):
        rmtree(output_dir)
    makedirs(output_dir)
    target_dir = join(output_dir, prog_name)
    makedirs(target_dir)
    elf = join(target_dir, prog_name.split('.')[0])
    # Use XSoC-SDK Makefile to build the program
    sdk_dir = join(ROOT, 'XSoC-SDK')
    execute_sp(['make', 'clean'], cwd=sdk_dir)
    execute_sp(['make'], cwd=sdk_dir)
    
    # Copy generated hex files from SDK out directory
    sdk_out_dir = join(sdk_dir, 'out')
    imem_hex = join(sdk_out_dir, 'babykyber_imem.hex')
    dmem_hex = join(sdk_out_dir, 'babykyber_dmem.hex')
    
    if not isfile(imem_hex) or not isfile(dmem_hex):
        raise FileNotFoundError("Hex files not found in XSoC-SDK/out/")
    
    # Copy to target_dir
    copy(imem_hex, join(target_dir, 'imem.hex'))
    copy(dmem_hex, join(target_dir, 'dmem.hex'))
    
    # Copy ELF and objdump for reference
    copy(join(sdk_out_dir, 'babykyber.elf'), join(target_dir, prog_name.split('.')[0]))
    copy(join(sdk_out_dir, 'babykyber.objdump'), join(target_dir, prog_name.split('.')[0] + '.objdump'))
    # Invoke sbt to generate Verilog for XSoC
    sbt_cmd = (
        f"sbt 'runMain XSoC.XSoCDriver --imem {join(target_dir, 'imem.hex')} --dmem {join(target_dir, 'dmem.hex')} --target-dir {target_dir}'"
    )
    execute_sp(sbt_cmd, shell=True, text=True)
    sv_files = tuple(
        join(target_dir, file)
        for file in next(walk(target_dir))[-1]
        if search(r'\.s?v$', file)
    )
    # Testbench for XSoC
    tb_cpp = join(ROOT, 'xsoc_tb.cpp')  # Using XSoC testbench
    execute_sp((
        'verilator',
        '--cc',
        '--exe',
        '--build',
        '--trace',
        '-Wno-fatal',
        '-Wno-lint',
        '-Wno-style',
        '--no-timing' if args.timing is None else args.timing,
        '-j', '0',
        '--top', 'XSoC',
        '--Mdir', join(target_dir, 'obj_dir'),
        tb_cpp
    ) + sv_files, text=True)
    chdir(target_dir)
    execute_sp([join(
        target_dir,
        'obj_dir',
        'VXSoC'
    )], text=True)
    chdir(ROOT)
