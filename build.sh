#!/usr/bin/env bash

set -o errexit
set -o nounset

_script_dir="$(readlink -f $(dirname ${0}))"

# Builds the Projucer
# EXPORTS:
#   projucer_binary: Absolute path of the Projucer binary built by the function
function build_projucer()
{
   local projucer_dir="${_script_dir}/JUCE/extras/Projucer/Builds/LinuxMakefile"
   projucer_binary="${projucer_dir}/build/Projucer"

   echo "*** Building the Projucer ***"
   (cd ${_script_dir}/JUCE/extras/Projucer/Builds/LinuxMakefile \
       && make -j $(nproc) \
   )
}

# Builds FRUT CMake transcoder 
# EXPORTS:
#   frut_prefix_dir: Absolute path of a directory where FRUT utilities are found
function build_frut()
{
   local frut_dir="${_script_dir}/FRUT"
   local frut_build_dir="${frut_dir}/build"
   frut_prefix_dir="${frut_dir}/prefix"
   
   echo "*** Building FRUT ***"
   mkdir -p ${frut_build_dir}
   mkdir -p ${frut_prefix_dir}
   (cd ${frut_build_dir} && \
      cmake ${frut_dir} -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${frut_prefix_dir} -DJUCE_ROOT=${_script_dir}/JUCE && \
      cmake --build . --target install -- -j8 \
   )
}

# Translate a .jucer file into a CMakeLists.txt file in the same directory using FRUT
# PARAM1 jucer_file   - Path of the .jucer file to translate
function transcode_jucer()
{
   local jucer_file="${1}"
   echo "*** Transcoding Projucer files to CMake configuration using FRUT ***"
   (cd $(dirname ${jucer_file})
   ${frut_prefix_dir}/FRUT/bin/Jucer2Reprojucer \
      --juce-modules ${_script_dir}/JUCE/modules \
      ${jucer_file} \
      ${frut_prefix_dir}/FRUT/cmake/Reprojucer.cmake
   )
   
}


build_projucer
build_frut
transcode_jucer "${_script_dir}/Toluene/Toluene.jucer"

# Configure and build the application
app_path="${_script_dir}/Toluene"
cd ${app_path}
pwd
mkdir -p build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build . -- -j 8
 