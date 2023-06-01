#include "pch.h"
#include "../Project1/calc.cpp"

TEST(TestCaseName, TestZegop) {
	Cal* cal = new Cal();
	int res1 = cal->getZegop(0);
	EXPECT_EQ(res1, 0);
	int res2 = cal->getZegop(2);
	EXPECT_EQ(res2, 4);
}

TEST(TestCaseName, TestMinus) {
	Cal* cal = new Cal();
	int res1 = cal->getMinus(1, 1);
	EXPECT_EQ(res1 , 0);
	int res2 = cal->getMinus(0, 1);
	EXPECT_EQ(res2 , -1);
	int res3 = cal->getMinus(1, 0);
	EXPECT_EQ(res3 , 1);
}