#include <gtest/gtest.h>

#include <sum.hpp>

TEST(Test, Simple) { ASSERT_EQ(GetMedian(1, 2, 3), 2); }
TEST(Test, Another) { ASSERT_EQ(GetMedian(6, 3, 5), 5); }
TEST(Test, Other) { ASSERT_EQ(GetMedian(6, 3, 8), 6); }
TEST(Test, Hard) { ASSERT_EQ(GetMedian(6, 6, 6), 6); }
TEST(Test, Also) { ASSERT_EQ(GetMedian(4, 4, 6), 4); }
TEST(Test, New) { ASSERT_EQ(GetMedian(-4, -10, -15), -10); }
