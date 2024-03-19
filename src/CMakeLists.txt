# Define the executable target

add_executable(hello main.cpp hello.cpp)

# Link the library to the executable
target_link_libraries(hello PRIVATE version_lib)

# what the point of doing include? to add headers?
target_include_directories(hello PUBLIC "${INCLUDE_DIR}/hello")
