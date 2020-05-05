#===================================================================================================
# CMake configuration for the Korg Trinity synthesizer engine model 
#===================================================================================================

set( public_dir ${CMAKE_CURRENT_SOURCE_DIR}/public )

set( model_headers
     ${public_dir}/OscillatorModel.h
     ${public_dir}/ParameterIDs.h
     ${public_dir}/ProgramModel.h
)

set( model_sources
     ModelBackend.h
     OscillatorModel.cpp
     ProgramModel.cpp
)

# Create a static library from the Trinity model
add_library( trinitymodel STATIC
             ${model_sources}
             ${model_headers}
)

target_compile_features(trinitymodel PUBLIC cxx_std_14)

target_include_directories( trinitymodel PUBLIC 
                  ${public_dir} 
)

if (BUILD_UNIT_TESTS)
   add_subdirectory(test)
endif()