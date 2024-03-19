

add_library(version_lib STATIC lib.cpp "${INCLUDE_DIR}/lib/lib.h")

# we got header
target_include_directories(version_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../include/lib")

# target_include_directories(version_lib PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
configure_file(version.h.in "${CMAKE_CURRENT_SOURCE_DIR}/version.h")
