#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/NextDateProblem.h"


TEST(NextDateProblemNormalTest, Test1)
{
	EXPECT_EQ(NextDateProblem::GetNextDate(0, 0, 0), "");
}