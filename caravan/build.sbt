// See README.md for license details.

ThisBuild / scalaVersion     := "2.13.10"
ThisBuild / version          := "0.1.0"
ThisBuild / organization     := "com.github.merl"

name := "Caravan"
libraryDependencies ++= Seq(
  "edu.berkeley.cs" %% "chisel3" % "3.5.5",
  "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % "test"
)
scalacOptions ++= Seq(
  "-Xsource:2.13.0",
  "-language:reflectiveCalls",
  "-deprecation",
  "-feature",
  "-Xcheckinit"
)
addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % "3.5.5" cross CrossVersion.full)


