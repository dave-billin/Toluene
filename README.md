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

## STEP 1: Pull JUCE submodule
The editor depends on the JUCE framework, which is included as a git submodule.
Prior to building the editor, it is necessary to pull down the JUCE code.  To
do this, the following command can be used:

    $> git submodule update --init --recommend-shallow

## STEP 2: Run the build script
Execute the provided build script

    $> ./build.sh

After executing the build script, the various executables built can be accessed
as follows:

- Toluene Application: Toluene/build/Toluene
- Projucer: JUCE/extras/Projucer/Builds/LinuxMakefile/build/Projucer

