

# XSoC-Lite

**Modular eXtensible SoC (RV32IMCF + BabyKyber Accelerator)**

XSoC-Lite is a hardware development platform for building modular, extensible RISC-V SoCs. It is intended for research, education, and rapid prototyping of RISC-V SoCs, cryptographic accelerators, and bus interconnects.

## Key Features

- **NucleusRV**: 5-stage pipelined RISC-V CPU core (RV32IMCF)
- **BabyKyber Accelerator**: Hardware accelerator for the BabyKyber post-quantum cryptography algorithm
- **Caravan**: Library for open-source bus protocols in Chisel

---


## BabyKyber Accelerator

The **BabyKyber Accelerator** is a hardware module designed to accelerate the post-quantum key encapsulation mechanism (KEM). It aims to:

- Provide quantum-resistant cryptography for embedded and IoT systems
- Integrate seamlessly with the NucleusRV RISC-V core via standard bus interfaces (Caravan)
- Serve as a reference for hardware/software co-design of cryptographic accelerators

**Note:** The BabyKyber accelerator is under active development. See the roadmap and documentation for integration details and usage examples.



## Projects Overview

### NucleusRV

A Chisel-based RISC-V 5-stage pipelined CPU design, implementing the 32-bit version of the ISA (incomplete).

- **Location:** `nucleusrv/`
- **Key Features:**
  - Written in Chisel (Scala)
  - Generates SystemVerilog
  - Supports RISC-V architectural tests
  - Example C program integration
- **Dependencies:**
  - [Verilator >= v5.002](https://verilator.org/guide/latest/install.html)
  - [riscv-gnu-toolchain](https://github.com/riscv/riscv-gnu-toolchain)
- **Quick Start:**

    ```sh
    git clone --recurse-submodules <this-repo>
    cd nucleusrv
    python3 gen_verilog.py <imem> <dmem>
    python3 simulate.py --sbt_args "--imem <imem>" nucleusrv.components.NRVDriver Top
    python3 run_riscv_arch_tests.py
    ```
    For more, see `nucleusrv/README.md`.

### Caravan

A library for easily creating open-source bus protocols in Chisel-based designs.

- **Location:** `caravan/`
- **Key Features:**
  - Wishbone Classic bus protocol (point-to-point)
  - Designed for FPGA and ASIC flows
  - Example Chisel integration provided
- **Documentation:** [caravan.readthedocs.io](https://caravan.readthedocs.io/en/latest/index.html)
- **Quick Example:**

    ```scala
    class ParentModule(implicit val config: WishboneConfig) extends Module {
      val io = IO(new Bundle{})
      val wbHost = Module(new WishboneHost())
      val wbSlave = Module(new WishboneDevice())
      wbHost.io.wbMasterTransmitter <> wbSlave.io.wbMasterReceiver
      wbSlave.io.wbSlaveTransmitter <> wbHost.io.wbSlaveReceiver
    }
    ```
    For more, see `caravan/README.md`.

---


## Repository Structure

- `nucleusrv/` — RISC-V CPU core and related tools
- `caravan/` — Bus protocol library and documentation
- `mem_data/`, `tools/`, `imperas-riscv-tests/` — Supporting data, scripts, and test suites

## Contributing

- Issues and pull requests are welcome for both subprojects.
- See each subproject's `README.md` for contribution guidelines and community links.

## License

See individual subproject folders for license details.
