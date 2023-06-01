#include "pch.h"
#include "../Project1/calc.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, TCGop) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(6, cal->getGop(2, 3));
	EXPECT_EQ(0, cal->getGop(0, 0));
	EXPECT_EQ(120, cal->getGop(12, 10));
}