
cmake_minimum_required(VERSION 3.12)

if(DEFINED ENV{GITHUB_RUN_NUMBER})
    set(PATCH_NUM $ENV{GITHUB_RUN_NUMBER})
else()
    set(PATCH_NUM 0)
endif()

project(helloworld
    VERSION 0.0.${PATCH_NUM}
)

set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include/")
option(ENBALE_TESTING "Build tests" ON)

add_subdirectory(src)
add_subdirectory(lib)

if(ENBALE_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)

# here will be there rest of setting up testing, downloading gtest and so on
