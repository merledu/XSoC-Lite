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

// Define BabyKyberAcceleratorCHISEL as a subproject that depends on caravan
lazy val babyKyber = (project in file("BabyKyberAcceleratorCHISEL")).dependsOn(caravan)

// Define nucleusrv as a subproject that depends on caravan, babyKyber, and hardfloat
lazy val nucleusrv = (project in file("nucleusrv")).dependsOn(caravan, babyKyber, hardfloat)

// Root project with Chisel dependencies for XSoC
lazy val root = (project in file("."))
  .dependsOn(caravan, babyKyber, nucleusrv)
  .aggregate(caravan, babyKyber, nucleusrv, hardfloat)
  .settings(
    libraryDependencies ++= Seq(
      "edu.berkeley.cs" %% "chisel3" % "3.5.6",
      "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % "test"
    ),
    addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % "3.5.6" cross CrossVersion.full)
  )
