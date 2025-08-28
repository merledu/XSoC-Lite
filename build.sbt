// See README.md for license details.

ThisBuild / scalaVersion := "2.12.12"
ThisBuild / version := "0.1.0"
ThisBuild / organization := "com.github.merl"

val chiselVersion = "3.5.5"

lazy val root = (project in file("."))
  .settings(
    name := "xsoc-lite",
    libraryDependencies ++= Seq(
      "edu.berkeley.cs" %% "chisel3" % chiselVersion,
      "edu.berkeley.cs" %% "chiseltest" % "0.5.6" % "test"
    ),
    addCompilerPlugin("edu.berkeley.cs" % "chisel3-plugin" % chiselVersion cross CrossVersion.full)
  )
  .dependsOn(caravan, nucleusrv, babykyber)

lazy val caravan = project in file("caravan")
lazy val nucleusrv = project in file("nucleusrv")
lazy val babykyber = project in file("babykyber")
