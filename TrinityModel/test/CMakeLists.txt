#===================================================================================================
# CMake configuration for the Korg Trinity synthesizer engine model unit tests 
#===================================================================================================


set( test_sources
     test_trinityModel.cpp
)

add_executable( test_trinityModel
                ${test_sources}
)

target_link_libraries( test_trinityModel 
                       PUBLIC trinitymodel
                       PUBLIC gtest
                       PUBLIC gtest_main
)

add_test( TrinityModelTests test_trinitymodel )
