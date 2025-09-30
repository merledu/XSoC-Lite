// Root build.sbt for unified multi-project build
// Hard-coded versions as per user request
ThisBuild / scalaVersion := "2.13.10"
ThisBuild / version := "0.1.0"
ThisBuild / scalacOptions ++= Seq(
  "-Xsource:2.13",
  "-language:reflectiveCalls",
  "-deprecation",
  "-feature",
  "-Xcheckinit"
)

// Define caravan as a subproject
lazy val caravan = project in file("caravan")

// Define hardfloat as a subproject (used by nucleusrv)
lazy val hardfloat = project in file("nucleusrv/berkeley-hardfloat")

// Define jigsaw as a subproject that depends on caravan
lazy val jigsaw = (project in file("jigsaw")).dependsOn(caravan)

// Define BabyKyberAcceleratorCHISEL as a standalone subproject
lazy val babyKyber = project in file("BabyKyberAcceleratorCHISEL")

// Define nucleusrv as a subproject that depends only on hardfloat
lazy val nucleusrvCore = (project in file("nucleusrv")).dependsOn(hardfloat)

// Root project with Chisel dependencies for XSoC
lazy val root = (project in file("."))
  .dependsOn(caravan, jigsaw, babyKyber, nucleusrvCore)
  .aggregate(caravan, jigsaw, babyKyber, nucleusrvCore, hardfloat)
  .settings(
    libraryDependencies ++= Seq(
      "edu.berkeley.cs" %% "chisel3" % "3.5.6",
      "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % "test"
    ),
    addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % "3.5.6" cross CrossVersion.full)
  )
