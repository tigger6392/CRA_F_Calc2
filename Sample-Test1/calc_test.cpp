#include "pch.h"
#include "../Project1/calc.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, TCDivide) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(12, cal->GetDivide(24, 2));
	EXPECT_EQ(0, cal->GetDivide(5, 0));
	EXPECT_EQ(100, cal->GetDivide(1000, 10));
}

TEST(TestCaseName, TCSumSum) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(6, cal->GetSumSum(1, 2, 3));
	EXPECT_EQ(15, cal->GetSumSum(4, 5, 6));
	EXPECT_EQ(24, cal->GetSumSum(7, 8, 9));
}

TEST(TestCaseName, SumTestm) {
	Cal* cal = new Cal();
	int ret = cal->getSum(1, 2);
	EXPECT_TRUE(ret == 3);
	delete cal;
}

