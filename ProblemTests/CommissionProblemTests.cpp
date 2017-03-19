#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/CommissionProblem.h"

TEST(CommissionProblemNormalTest, Test1)
{
	EXPECT_EQ(CommissionProblem::ComputeCommission(0, 0, 0), 0);
}