
add_executable(hello main.cpp hello.cpp)

target_link_libraries(hello PRIVATE version_lib)

target_include_directories(hello PUBLIC "${INCLUDE_DIR}/hello")

if(MSVC)
    target_compile_options(hello PRIVATE
        /W4
    )
else()
    target_compile_options(hello PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

install(TARGETS hello RUNTIME DESTINATION bin)