package XSoC
import chisel3._
import chisel3.stage.ChiselStage
import caravan.bus.wishbone.{WishboneConfig, WishboneHost, WishboneDevice}
import nucleusrv.components.Top
import nucleusrv.tracer.TracerO
import BabyKyber.BabyKyberTop
import jigsaw.peripherals.UART.UartTOP

class XSoC(programFile:Option[String], dataFile:Option[String])(implicit val wbConfig: WishboneConfig) extends Module {
  val io = IO(new Bundle {
    val pin = Output(UInt(32.W))
    val rvfi = Output(new TracerO)
  })

  // Instantiate NucleusRV core
  val core = Module(new Top(programFile, dataFile))

  // Caravan bus adapters (from harness)
  val hostAdapter = Module(new WishboneHost())
  val deviceAdapter = Module(new WishboneDevice())

  // Instantiate BabyKyberTop directly
  val babyKyber = Module(new BabyKyberTop())

  // Instantiate UART
  val uart = Module(new UartTOP())

  // Connect core to host adapter
  // Since both are Decoupled, manual connection
  hostAdapter.io.reqIn.valid := core.io.baby_kyber.req.valid
  hostAdapter.io.reqIn.bits := core.io.baby_kyber.req.bits
  core.io.baby_kyber.req.ready := hostAdapter.io.reqIn.ready

  // For rsp, hostAdapter.io.rspOut is Decoupled, core.io.baby_kyber.rsp is Flipped(Decoupled)
  hostAdapter.io.rspOut <> core.io.baby_kyber.rsp

  // Connect adapters
  hostAdapter.io.wbMasterTransmitter <> deviceAdapter.io.wbMasterReceiver
  deviceAdapter.io.wbSlaveTransmitter <> hostAdapter.io.wbSlaveReceiver

  // Connect device adapter to BabyKyberTop
  babyKyber.io.req <> deviceAdapter.io.reqOut
  deviceAdapter.io.rspIn <> babyKyber.io.rsp

  // Connect control signals
  babyKyber.io.enable := true.B
  babyKyber.io.key_enable := core.io.key_enable_trigger
  babyKyber.io.encryption_enable := core.io.encryption_enable_trigger
  babyKyber.io.decryption_enable := core.io.decryption_enable_trigger

  // Connect interrupts back
  core.io.baby_kyber.cio_babykyber_intr_key := babyKyber.io.cio_babykyber_intr_key
  core.io.baby_kyber.cio_babykyber_intr_encrypt := babyKyber.io.cio_babykyber_intr_encrypt
  core.io.baby_kyber.cio_babykyber_intr_decrypt := babyKyber.io.cio_babykyber_intr_decrypt

  // Connect UART using adapter pattern
  val uartHostAdapter = Module(new WishboneHost())
  val uartDeviceAdapter = Module(new WishboneDevice())

  // Connect core UART to adapter
  uartHostAdapter.io.reqIn <> core.io.uart.req
  core.io.uart.rsp <> uartHostAdapter.io.rspOut

  // Connect adapters
  uartHostAdapter.io.wbMasterTransmitter <> uartDeviceAdapter.io.wbMasterReceiver
  uartDeviceAdapter.io.wbSlaveTransmitter <> uartHostAdapter.io.wbSlaveReceiver

  // Convert UartTOP signals to req/rsp
  uart.io.ren := uartDeviceAdapter.io.reqOut.valid && !uartDeviceAdapter.io.reqOut.bits.isWrite
  uart.io.we := uartDeviceAdapter.io.reqOut.valid && uartDeviceAdapter.io.reqOut.bits.isWrite
  uart.io.wdata := uartDeviceAdapter.io.reqOut.bits.dataRequest
  uart.io.addr := uartDeviceAdapter.io.reqOut.bits.addrRequest(7,0)
  uart.io.rx_i := false.B  // External input

  // Response handling
  uartDeviceAdapter.io.rspIn.valid := true.B  // Always ready
  uartDeviceAdapter.io.rspIn.bits.dataResponse := uart.io.rdata
  uartDeviceAdapter.io.rspIn.bits.error := false.B
  uartDeviceAdapter.io.reqOut.ready := true.B  // Always ready

  // UART external signals (tie off for now)
  core.io.uart.cio_uart_rx_i := false.B
  // TX output available as uart.io.tx_o but not connected to top-level

  // Connect outputs
  io.pin := core.io.pin
  io.rvfi := core.io.rvfi
}

object XSoCDriver extends App {
  implicit val config = WishboneConfig(32, 32)
  val IMem = if (args.contains("--imem")) Some(args(args.indexOf("--imem") + 1)) else None
  val DMem = if (args.contains("--dmem")) Some(args(args.indexOf("--dmem") + 1)) else None
  (new ChiselStage).emitVerilog(
    new XSoC(IMem, DMem),
    if (args.contains("--target-dir")) args.slice(
      args.indexOf("--target-dir"),
      args.indexOf("--target-dir") + 2
    ) else Array()
  )
}