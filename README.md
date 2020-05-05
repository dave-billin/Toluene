Korg Trinity/TR System Exclusive Editor
===========================

This repository contains sources used to build a graphical editor for the
Korg Trinity and TR Rack series of instruments.

# Build Dependencies
- JUCE (as git submodule)
- FRUT (as git submodule)

### Operating System Support
- Linux
- Windows (FUTURE)

Building
===========================

## STEP 1: First-time bootstrap build
The Toluene editor has several dependencies that are automatically fetched and built by CMake.  
These include the JUCE framework and FRUT, a utility for converting .jucer files to a corresponding
CMake configuration.  Additionally, GoogleTest is built as a dependency when automated unit tests
are enabled in the build.  To facilitate building initial dependencies, the
utility script, [bootstrap.sh](bootstrap.sh) is provided.  Once this script has successfully been
run to completion, it need not be run again for subsequent builds.  To execute the script, simply
navigate to the repository root and run:

    $> ./bootstrap.sh

## STEP 2: Building the Toluene application
To build the Toluene application from the repository root, enter the build/ directory and run CMake
in build command mode:

    $> cd build/ && cmake --build .

## Additional Build Steps
The following additional build targets are supplied as a convenience:

| Build Rule           | Description                                                                                                                                                                                           |
|:---------------------|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| run_Projucer         | Run the JUCE Projucer with the Toluene.jucer configuration                                                                                                                                            |
| run_Jucer2Reprojucer | Run the FRUT Jucer2Reprojucer to transcode the Toluene Projucer project to a corresponding CMake configuration.  This is needed when changes are made to [Toluene.jucer](Toluene/Toluene.jucer) file. |

## Project Binaries
The following table details the binaries built by the Toluene project:

| Description      | Path                                                     |
|:-----------------|:---------------------------------------------------------|
| Toluene Editor   | build/Toluene/TolueneEditor                              |
| Jucer2Reprojucer | build/FRUT-bin/FRUT/bin//Jucer2Reprojucer                |
| The Projucer     | JUCE/extras/Projucer/Builds/LinuxMakefile/build/Projucer |


## Cleaning the build
Toluene is built entirely out-of-source.  To clean all Toluene build artifacts and rebuild from
scratch, simply delete the build/ directory, and re-run the bootstrap.sh script.  When upgrading the
version of the JUCE library used by the project, it may also be necessary to delete build artifacts
located in the JUCE/extras/Projucer/Builds/LinuxMakefile/build directory.
