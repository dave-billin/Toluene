#!/usr/bin/env bash

set -o errexit
set -o nounset

_script_dir="$(readlink -f $(dirname ${0}))"
_build_dir="${_script_dir}/build"

# Builds the Projucer
function build_projucer()
{
   local projucer_dir="${_script_dir}/JUCE/extras/Projucer/Builds/LinuxMakefile"
   local projucer_binary="${projucer_dir}/build/Projucer"
   local projucer_bin_dir="${_build_dir}"

   echo "*** Building the Projucer ***"
   mkdir -p ${projucer_bin_dir}
   (cd ${_script_dir}/JUCE/extras/Projucer/Builds/LinuxMakefile \
       && make -j $(nproc) \
       && cp ${projucer_binary} ${projucer_bin_dir})
}

mkdir -p ${_build_dir}
build_projucer

