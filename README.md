E-mu Proteus 2000 Editor
===========================

This repository contains sources used to build a graphical editor for the
Korg TR Rack.

Building
===========================

## STEP 1: Pull JUCE submodule
The editor depends on the JUCE framework, which is included as a git submodule.
Prior to building the editor, it is necessary to pull down the JUCE code.  To
do this, the following command can be used:

    $> git submodule update --init --recommend-shallow

