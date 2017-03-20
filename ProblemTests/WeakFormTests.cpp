#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/TriangleProblem.h"
#include "../ProblemLibrary/NextDateProblem.h"
#include "../ProblemLibrary/CommissionProblem.h"


TEST(TriangleProblemTest, WeakFormTests)
{
	//normal
	EXPECT_EQ(TriangleProblem::TriangleType(1, 2, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(2, 2, 3), "isosceles");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 2, 3), "isosceles");
	EXPECT_EQ(TriangleProblem::TriangleType(4, 2, 3), "scalene");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 3, 3), "equilateral");
}

TEST(NextDateProblemTest, WeakFormTests)
{
	//normal
	EXPECT_EQ(NextDateProblem::GetNextDate(6, 21, 1995), "6/22/1995");
	EXPECT_EQ(NextDateProblem::GetNextDate(8, 30, 1996), "8/31/1996");
	EXPECT_EQ(NextDateProblem::GetNextDate(8, 31, 1996), "9/1/1996");
	EXPECT_EQ(NextDateProblem::GetNextDate(12, 31, 1996), "1/1/1997");
}

TEST(CommissionTest, WeakFormTests) 
{
	//normal
	EXPECT_EQ(CommissionProblem::ComputeCommission(10, 10, 10), "100");
	EXPECT_EQ(CommissionProblem::ComputeCommission(10, 20, 10), "195");
	EXPECT_EQ(CommissionProblem::ComputeCommission(20, 20, 20), "400");
	EXPECT_EQ(CommissionProblem::ComputeCommission(-1, 0, 0), "end");
}