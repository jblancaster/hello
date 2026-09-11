#include <gtest/gtest.h>

#include "greeting.h"
#include "hello.h"

#include <sstream>

int add(int a, int b) {
    return a + b;
}

TEST(HelloTest, ReturnsHelloWorldMessage) {
    EXPECT_EQ(hello_message(), "Hello, world!");
}

TEST(HelloTest, WritesHelloWorldMessage) {
    std::ostringstream output;

    EXPECT_EQ(run_hello(output), 0);
    EXPECT_EQ(output.str(), "Hello, world!\n");
}

TEST(AddTest, AddsPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, AddsNegativeAndPositiveNumbers) {
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(AddTest, AddsPositiveAndNegativeNumbers) {
    EXPECT_EQ(add(10, -3), 7);
}
