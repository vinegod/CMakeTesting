set(This Tests)

add_executable(${This} tests.cpp)

target_link_libraries(${This} PUBLIC gtest_main hellolib)

add_test(
    NAME ExampleTest
    COMMAND ${This}
)

add_test(
    NAME Example2Test
    COMMAND ${This}
)