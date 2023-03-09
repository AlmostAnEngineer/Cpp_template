#include <gtest/gtest.h>
#include "../src/module1.h"

TEST(method_test,positive)
{
    EXPECT_EQ(calculate(1,3),4);
    EXPECT_EQ(calculate(1,3),3);
}
TEST(method_test,negative)
{
    EXPECT_EQ(calculate(1,-1),4);
    EXPECT_EQ(calculate(1,-3),3);
}