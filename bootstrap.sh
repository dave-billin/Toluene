#!/usr/bin/env bash

set -o errexit
set -o nounset

_script_dir="$(readlink -f $(dirname ${0}))"
JUCE_dir="${_script_dir}/JUCE"
FRUT_dir="${_script_dir}/FRUT"
googletest_dir="${_script_dir}/googletest"
app_dir="${_script_dir}/Toluene"
build_dir=${_script_dir}/build

bar="======================================"


#---------------------------------------------------------------------------------------------------
# DESCRIPTION: Prints information on usage and exits
#---------------------------------------------------------------------------------------------------
function print_usage_and_exit()
{
cat << EOF
USAGE: $(basename ${0}) [OPTIONS]

OPTIONS:
   -h, --help   
      Print information on usage and exit
   
   -j, --juce2cmake
      Regenerate CMakeLists.txt from .jucer file
      
   -t, --build-tests
      Build unit tests
      
EOF
exit 0
}

#---------------------------------------------------------------------------------------------------
# Translate the .jucer file into a CMakeLists.txt file in the same directory using FRUT
#---------------------------------------------------------------------------------------------------
function jucer2cmake()
{
   local FRUT_install_dir="$(find ${build_dir} -type d -name FRUT-bin)"
   echo "FRUT_install_dir = ${FRUT_install_dir}"
   local jucer2reprojucer_binary="$(find ${build_dir} -type f -name Jucer2Reprojucer)"
   local jucer_file="${app_dir}/Toluene.jucer"
   echo ${bar}
   echo "*** Generating CMake configuration from .jucer file ***"
   echo ${bar}
   (cd $(dirname ${jucer_file})
   ${FRUT_install_dir}/FRUT/bin/Jucer2Reprojucer \
      --juce-modules ${JUCE_dir}/modules \
      ${jucer_file} \
      ${FRUT_install_dir}/FRUT/cmake/Reprojucer.cmake
   )
}


#==============================================
# Parse command line options using getopt
#==============================================
short_options="hbtjd"
long_options="help,bootstrap,build-tests,juce2cmake,dependencies"
parsed_options=$(getopt -n "${0}" --options "${short_options}" --long "${long_options}" -- "${@}")
eval set -- "${parsed_options}"


cmake_additional_args=
while true;
do
   OPTION=${1}
   [[ "${#}" -ge 2 ]] && OPTARG=${2};
   
   case "${OPTION}" in
      -h|--help) print_usage_and_exit;;
      -j|--juce2cmake)
            build_bootstrap='false'
            jucer2cmake
            exit 0;;
      -t|--build-tests) cmake_additional_args+=" -DBUILD_UNIT_TESTS=ON";;
      
      --) break;;
      *) echo "Unrecognized option: '${OPT}'" >&2;
         exit 1;;
   esac
   
   shift
done



#------------------------------------------
# Execute bootstrap build
#------------------------------------------
echo "${bar}"
echo "*** Bootstrapping build dependencies ***"
echo "${bar}"

# Create build directory
mkdir -p ${build_dir}

# Configure and build dependencies
cd build
cmake -D BUILD_DEPENDENCIES_ONLY:BOOL=ON  ${cmake_additional_args} ..
cmake --build . -- -j$(nproc)

# Reconfigure to enable building main program
cmake -U BUILD_DEPENDENCIES_ONLY ${cmake_additional_args} ..

# Build the Toluene application
echo "${bar}"
echo "*** Building Toluene ***"
echo "${bar}"

cmake -DCMAKE_BUILD_TYPE=Debug ${cmake_additional_args} ${_script_dir}
cmake --build . -- -j$(nproc)

echo
echo "Bootstrap build succeeded!"
echo "To build the Toluene application run:"
echo "  cd build && cmake --build ."
echo
