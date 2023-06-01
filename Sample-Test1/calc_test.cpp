#include "pch.h"
#include "../Project1/calc.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, SumTestm) {
	Cal* cal = new Cal();
	int ret = cal->getSum(1, 2);
	EXPECT_TRUE(ret == 3);
	delete cal;
}
