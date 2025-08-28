
# XSoC-Lite

**Modular eXtensible SoC (RV32IMCF + BabyKyber Accelerator)**

XSoC-Lite is a hardware development platform for building modular, extensible RISC-V SoCs. It is intended for research, education, and rapid prototyping of RISC-V SoCs, cryptographic accelerators, and bus interconnects.

## Key Features

- **NucleusRV**: 5-stage pipelined RISC-V CPU core (RV32IMCF)
- **BabyKyber Accelerator**: Hardware accelerator for the BabyKyber post-quantum cryptography algorithm
- **Caravan**: Library for open-source bus protocols in Chisel

## Getting Started

### Prerequisites

- [SBT](https://www.scala-sbt.org/) (Scala Build Tool)
- [Verilator](https://verilator.org/) for simulation
- [RISC-V GNU Toolchain](https://github.com/riscv/riscv-gnu-toolchain) for compiling C programs

### Clone and Setup

```sh
git clone --recurse-submodules https://github.com/merledu/XSoC-Lite.git
cd XSoC-Lite
```

### Build the Project

```sh
sbt compile
```

### Run Tests

```sh
sbt test
```

### Generate Verilog

```sh
sbt run
```

## Submodules

### NucleusRV

A Chisel-based RISC-V 5-stage pipelined CPU design.

- **Location:** `nucleusrv/`
- **Quick Start:** See `nucleusrv/README.md`

### Caravan

Bus protocol library for Chisel.

- **Location:** `caravan/`
- **Documentation:** [caravan.readthedocs.io](https://caravan.readthedocs.io/en/latest/)

### BabyKyber

Post-quantum cryptography accelerator.

- **Location:** `babykyber/`
- **Note:** Under development

## Contributing

Issues and PRs welcome. See submodule READMEs for details.

## License

See individual submodules for licenses.
