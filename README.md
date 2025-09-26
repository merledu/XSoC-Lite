# XSoC-Lite: Modular RISC-V SoC Platform

**A complete hardware development platform featuring NucleusRV processor, BabyKyber accelerator, and advanced simulation capabilities**

## Overview
XSoC-Lite provides an open-source, modular RISC-V SoC platform designed for rapid prototyping and customization. Built around the NucleusRV processor core and integrated with the BabyKyber post-quantum cryptography accelerator, it delivers an efficient and versatile solution for hardware developers, researchers, and educators working on RISC-V-based systems.


## 🚀 Features

- **RISC-V ISA**: 64-bit RISC-V implementation with IMCF extensions
- **NucleusRV Core**: 5-stage pipelined processor design
- **BabyKyber Accelerator**: Post-quantum cryptography hardware acceleration
- **Caravan Bus Library**: Open-source bus protocol support in Chisel
- **Simulation Environment**: Verilator-based hardware simulation
- **Bare-Metal Programming**: XSoC-SDK for low-level software development
- **Modular Design**: Reusable and parametrized components
- **Open-Source**: Fully open development platform

## 🎯 Scope

### Processor Core
- **Base ISA**: RISC-V 64-bit Integer (RV64I) instruction set
- **Extensions**: Multiplication (M), Floating-Point (F), Compressed (C) support
- **Pipeline**: 5-stage implementation for efficient execution

### Hardware Accelerators
- **BabyKyber**: Post-quantum cryptography acceleration unit
- **Custom Extensions**: Framework for additional accelerator integration

### Bus Architecture
- **Caravan Bus**: Optimized interconnect for modular SoC design
- **Standard Protocols**: Support for industry-standard bus interfaces

### Development Tools
- **Simulation**: Verilator-based cycle-accurate simulation
- **Software SDK**: Complete bare-metal programming environment
- **Verification**: RISC-V architectural test suite compliance

## 🚀 Overview

XSoC-Lite is a comprehensive hardware development platform designed for research, education, and rapid prototyping of RISC-V SoCs. It integrates a 5-stage pipelined RISC-V CPU core with post-quantum cryptography acceleration capabilities, providing developers with a complete ecosystem for modern SoC design and implementation.

### Key Components

- **NucleusRV**: 5-stage pipelined RISC-V CPU core (RV64IMCF)
- **BabyKyber Accelerator**: Hardware accelerator for post-quantum cryptography
- **Caravan**: Open-source bus protocol library in Chisel
- **XSoC-SDK**: Complete software development kit for bare-metal programming

## 🛠️ Prerequisites

Before getting started, ensure you have the following installed:

### Essential Tools
```bash
# RISC-V GNU Toolchain
sudo apt-get install gcc-riscv64-unknown-elf

# Verilator (>= v5.002)
sudo apt-get install verilator

# Scala Build Tool
sudo apt-get install sbt

# Python 3
sudo apt-get install python3 python3-pip
```

### Verification
```bash
riscv64-unknown-elf-gcc --version
verilator --version
sbt --version
python3 --version
```

## 📦 Installation & Setup

### 1. Clone the Repository
```bash
git clone --recurse-submodules https://github.com/merledu/XSoC-Lite.git
cd XSoC-Lite
```

![Clone Process](images/git_clone.png)


## 🎯 Quick Start Guide

### Running Your First Simulation

The easiest way to get started is running the default simulation:

```bash
python3 xsoc_simulate.py
```

This will automatically run the default BabyKyber program from XSoC-SDK.

![Simulation Output](simulation.jpeg)



## 📁 Project Structure

```
XSoC-Lite/
├── build.sbt                 # Root Scala build configuration
├── README.md                 # Project documentation
├── xsoc_simulate.py          # XSoC simulation script
├── xsoc_tb.cpp               # XSoC testbench
├── nucleusrv/                # RISC-V CPU core
│   ├── src/                  # Chisel source files
│   ├── tools/                # Development tools and test 
│   ├── berkeley-hardfloat/   # Hardfloat library submodule
│   ├── docs/                 # Documentation
│   └── simulate.py           # Simulation script
├── BabyKyberAcceleratorCHISEL/ # Post-quantum crypto accelerator
│   ├── src/                  # Chisel source files
│   └── build.sbt             # Build configuration
├── caravan/                  # Bus protocol library
│   ├── src/                  # Chisel source files
│   └── docs/                 # Documentation
├── XSoC-SDK/                 # Software development kit
│   ├── examples/             # Example programs
│   ├── include/              # Header files
│   └── src/                  # SDK source files
├── output/                   # Generated output files
├── project/                  # SBT project files
├── src/                      # Additional source files
├── target/                   # Build artifacts
└── test_run_dir/             # Test execution directory
```

![Project Structure](images/project_structure.png)

## 🤝 Contributing

### Submodule Development

Each submodule has its own development workflow:

1. **NucleusRV**: CPU core improvements and ISA extensions
2. **BabyKyber**: Cryptographic accelerator optimizations  
3. **Caravan**: Bus protocol enhancements
4. **XSoC-SDK**: Software library and driver development
