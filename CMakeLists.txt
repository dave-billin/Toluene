#===================================================================================================
# CMake Configuration for Toluene, a KORG Trinity series system exclusive editor
#===================================================================================================

project("Toluene")

cmake_minimum_required(VERSION 3.4)

include(ExternalProject)

set( cmake_modules_dir ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules )
set( JUCE_dir ${CMAKE_CURRENT_SOURCE_DIR}/JUCE )
set( FRUT_dir ${CMAKE_CURRENT_SOURCE_DIR}/FRUT )
set( Toluene_dir ${CMAKE_CURRENT_SOURCE_DIR}/Toluene )
set( googletest_dir ${CMAKE_CURRENT_SOURCE_DIR}/googletest )


#-----------------------------------------------------------
# Set up multi-threaded build support for external projects
#-----------------------------------------------------------
include(ProcessorCount)
ProcessorCount(NUM_PARALLEL_BUILD_THREADS_DEFAULT)
set(NUM_PARALLEL_BUILD_THREADS ${NUM_PARALLEL_BUILD_THREADS_DEFAULT} 
      CACHE STRING "Number of threads used when building")
mark_as_advanced(NUM_PARALLEL_BUILD_THREADS)

set(PARALLEL_MAKE_ARGUMENT "")
message(STATUS "CMAKE_GENERATOR = ${CMAKE_GENERATOR}")
if (NUM_PARALLEL_BUILD_THREADS)
    if ( ${CMAKE_GENERATOR} MATCHES "Unix Makefiles" )
            set(PARALLEL_MAKE_ARGUMENT "-j${NUM_PARALLEL_BUILD_THREADS}")
    elseif (MSVC)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
      message(STATUS "Added parallel build arguments to CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
    endif()
endif()

#-----------------------------------------------------------
# Define a target to build the Projucer
#-----------------------------------------------------------
set( Projucer_binary "${JUCE_dir}/extras/Projucer/Builds/LinuxMakefile/build/Projucer" )
ExternalProject_Add( Projucer
   GIT_REPOSITORY "https://github.com/WeAreROLI/JUCE.git"
   GIT_TAG "5.4.7"
   GIT_SHALLOW TRUE
   GIT_PROGRESS TRUE
   DOWNLOAD_DIR "${JUCE_dir}"
   SOURCE_DIR "${JUCE_dir}"
   BUILD_IN_SOURCE TRUE
   BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} -C ${JUCE_dir}/extras/Projucer/Builds/LinuxMakefile ${PARALLEL_MAKE_ARGUMENT}
   BUILD_BYPRODUCTS ${Projucer_binary}
   CONFIGURE_COMMAND ""
   INSTALL_COMMAND ""
   TEST_COMMAND ""
)

#-----------------------------------------------------------
# Define a target to build FRUT
#
# NOTE: FRUT executables will be installed in a "FRUT-bin"
# directory in CMAKE_BINARY_DIR
#-----------------------------------------------------------
set( FRUT_prefix_dir "${CMAKE_CURRENT_SOURCE_DIR}/FRUT/prefix")
set( FRUT_install_dir ${CMAKE_BINARY_DIR}/FRUT-bin )
set( Jucer2Reprojucer_binary "${FRUT_install_dir}/FRUT/bin/Jucer2Reprojucer" )
set( FRUT_cmake_dir ${FRUT_install_dir}/FRUT/cmake )
ExternalProject_Add( FRUT
   GIT_REPOSITORY "https://github.com/McMartin/FRUT.git"
   GIT_TAG "master"
   GIT_SHALLOW TRUE
   GIT_PROGRESS TRUE
   DOWNLOAD_DIR "${FRUT_dir}"
   STAMP_DIR "${CMAKE_CURRENT_BINARY_DIR}/FRUT-stamp"
   SOURCE_DIR ${FRUT_dir}
   BUILD_COMMAND ${CMAKE_MAKE_PROGRAM} ${PARALLEL_MAKE_ARGUMENT}
   CMAKE_CACHE_DEFAULT_ARGS -DCMAKE_BUILD_TYPE:STRING=Release 
                            -DCMAKE_INSTALL_PREFIX:PATH=${FRUT_install_dir} 
                            -DJUCE_ROOT:STRING=${JUCE_dir}
   TEST_COMMAND ""
   BUILD_BYPRODUCTS ${Jucer2Reprojucer_binary} ${FRUT_cmake_dir}
)

# Tell CMake that FRUT depends on Projucer
add_dependencies( FRUT Projucer )


# If building unit tests, pull in the GoogleTest dependency
if (BUILD_UNIT_TESTS)
   include( ${cmake_modules_dir}/googletest-extproject.cmake )
endif()

# For the bootstrap build, we skip the main application until a second pass
set(BUILD_DEPENDENCIES_ONLY OFF CACHE BOOL "Only build application dependencies (for bootstrapping)")
if ( BUILD_DEPENDENCIES_ONLY )
   return()
endif()


#----------------------------------
# Build the main application
#----------------------------------
add_subdirectory(TrinityModel)

set( FRUT_cmake_dir ${FRUT_install_dir}/FRUT/cmake )
add_subdirectory(${Toluene_dir})

# Add a target to run the Projucer application
add_custom_target( run_Projucer
                   ${Projucer_binary}
                   DEPENDS Projucer
                   WORKING_DIRECTORY ${Toluene_dir}
                   COMMENT "Run the Projucer"
                 )
                   
# Add a target to run the Projucer application
add_custom_target( run_Jucer2Reprojucer
                   ${Jucer2Reprojucer_binary} --juce-modules ${JUCE_dir}/modules 
                                              ${Toluene_dir}/Toluene.jucer 
                                              ${FRUT_cmake_dir}/Reprojucer.cmake
                   DEPENDS FRUT
                   WORKING_DIRECTORY ${Toluene_dir}
                   COMMENT "Translate Projucer file to CMake"
                 )
