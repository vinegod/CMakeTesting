
add_library(hellolib
    include/hello.hpp
    src/hello.cpp                   
)

target_include_directories(hellolib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")