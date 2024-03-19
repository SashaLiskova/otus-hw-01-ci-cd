#include <gtest/gtest.h>

#include "lib.h"

TEST(HelloTest, BasicTest) { EXPECT_NE(getVersion(), ""); }