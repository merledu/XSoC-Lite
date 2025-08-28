package xsoclite

import chisel3._
import caravan.bus.wishbone._
import nucleusrv.components._
import babykyber.BabyKyber

class XSoC extends Module {
  val io = IO(new Bundle {
    // Define IOs here
  })

  // Instantiate components from submodules
  val cpu = Module(new NRV())
  val bus = Module(new WishboneHost())
  val kyber = Module(new BabyKyber())

  // Connect them as needed
}

object XSoCDriver extends App {
  chisel3.Driver.execute(args, () => new XSoC)
}
