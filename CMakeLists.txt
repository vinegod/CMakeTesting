cmake_minimum_required(VERSION 3.12)
project(hello-project VERSION 0.1)

add_subdirectory(say-hello)
add_subdirectory(hello_main)


enable_testing()

add_subdirectory(googletest)
add_subdirectory(tests)