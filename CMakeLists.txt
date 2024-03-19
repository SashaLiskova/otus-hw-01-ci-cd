
cmake_minimum_required(VERSION 3.12)

if(DEFINED ENV{GUTHUB_RUN_NUMBER})
    set(PATCH_NUM $ENV{GITHUB_RUN_NUMBER})
else()
    set(PATCH_NUM 0)
endif()

project(test
    LANGUAGES CXX
    VERSION 0.0.${PATCH_NUM}
)

# created include dir
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include/")
option(ENBALE_TESTING "Build tests" ON)

add_subdirectory(src)
add_subdirectory(lib)

if(ENBALE_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

# here will be there rest of setting up testing, downloading gtest and so on
