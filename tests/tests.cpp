#include "hello.hpp"
#include "gtest/gtest.h"


TEST(ExampleTest, CheckHello) {
    EXPECT_EQ(hello::say_hello(), "Hello, World!\n");
}

TEST(Example2Test, CheckHello2) {
    EXPECT_EQ(hello::say_hello(), "Hello, World!\n");
}