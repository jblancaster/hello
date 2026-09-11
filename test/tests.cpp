#include <gtest/gtest.h>

#include "greeting.h"

int add(int a, int b) {
    return a + b;
}

TEST(HelloTest, ReturnsHelloWorldMessage) {
    EXPECT_EQ(hello_message(), "Hello, world!");
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
