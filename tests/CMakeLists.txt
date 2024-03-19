include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(
    test_version
    test.cpp
)

add_test(
    NAME test
    COMMAND $<TARGET_FILE:test_version>
)

target_link_libraries(
    test_version
    GTest::gtest_main
    version_lib
)

include(GoogleTest)
