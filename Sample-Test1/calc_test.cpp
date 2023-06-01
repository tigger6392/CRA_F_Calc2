#include "pch.h"
#include "../Project1/calc.cpp"

TEST(TestCaseName, SumTestm) {
	Cal* cal = new Cal();
	int ret = cal->getSum(1, 2);
	EXPECT_TRUE(ret == 3);
	delete cal;
}

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

TEST(TestCaseName, TCDivide) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
	
  EXPECT_EQ(12, cal->GetDivide(24, 2));
	EXPECT_EQ(0, cal->GetDivide(5, 0));
	EXPECT_EQ(100, cal->GetDivide(1000, 10));
}

TEST(TestCaseName, TCGop) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(6, cal->getGop(2, 3));
	EXPECT_EQ(0, cal->getGop(0, 0));
	EXPECT_EQ(120, cal->getGop(12, 10));
}

TEST(TestCaseName, TCSumSum) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);

	EXPECT_EQ(6, cal->GetSumSum(1, 2, 3));
	EXPECT_EQ(15, cal->GetSumSum(4, 5, 6));
	EXPECT_EQ(24, cal->GetSumSum(7, 8, 9));
}

