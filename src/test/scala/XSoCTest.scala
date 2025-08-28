package xsoclite

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class XSoCTest extends AnyFlatSpec with ChiselScalatestTester {
  "XSoC" should "work" in {
    test(new XSoC) { dut =>
      // Add test logic here
    }
  }
}
