#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/TriangleProblem.h"
#include "../ProblemLibrary/NextDateProblem.h"
#include "../ProblemLibrary/CommissionProblem.h"

TEST(TriangleProblemTest, StrongFormTests)
{
	//normal
	EXPECT_EQ(TriangleProblem::TriangleType(1, 2, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(2, 2, 3), "isosceles");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 2, 3), "isosceles");
	EXPECT_EQ(TriangleProblem::TriangleType(4, 2, 3), "scalene");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 3, 3), "equilateral");
	//robust
	EXPECT_EQ(TriangleProblem::TriangleType(0, 3, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 0, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 3, 0), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(6, 3, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 6, 3), "not a triangle");
	EXPECT_EQ(TriangleProblem::TriangleType(3, 3, 6), "not a triangle");
}

TEST(NextDateProblemTest, StrongFormTests) 
{
	//normal
	EXPECT_EQ(NextDateProblem::GetNextDate(6, 21, 1995), "6/22/1995");
	EXPECT_EQ(NextDateProblem::GetNextDate(8, 30, 1996), "8/31/1996");
	EXPECT_EQ(NextDateProblem::GetNextDate(8, 31, 1996), "9/1/1996");
	EXPECT_EQ(NextDateProblem::GetNextDate(12, 31, 1996), "1/1/1997");
	//robust
	EXPECT_EQ(NextDateProblem::GetNextDate(2, 28, 2000), "2/29/2000");
	EXPECT_EQ(NextDateProblem::GetNextDate(2, 29, 2001), "invalid input date");
	EXPECT_EQ(NextDateProblem::GetNextDate(13, 15, 2001), "invalid input date");
	EXPECT_EQ(NextDateProblem::GetNextDate(1, -1, 2001), "invalid input date");
	EXPECT_EQ(NextDateProblem::GetNextDate(12, 32, 2001), "invalid input date");
	EXPECT_EQ(NextDateProblem::GetNextDate(2, 29, 1900), "invalid input date");
	EXPECT_EQ(NextDateProblem::GetNextDate(6, 30, 2000), "7/1/2000");
}

TEST(CommissionTest, StrongFormTests) 
{
	//normal
	EXPECT_EQ(CommissionProblem::ComputeCommission(10, 10, 10), "100");
	EXPECT_EQ(CommissionProblem::ComputeCommission(10, 20, 10), "195");
	EXPECT_EQ(CommissionProblem::ComputeCommission(20, 20, 20), "400");
	EXPECT_EQ(CommissionProblem::ComputeCommission(-1, 0, 0), "end");
	//robust
	EXPECT_EQ(CommissionProblem::ComputeCommission(0, 49, 51), "locks not in 1~70");
	EXPECT_EQ(CommissionProblem::ComputeCommission(71, 51, 48), "locks not in 1~70");
	EXPECT_EQ(CommissionProblem::ComputeCommission(30, 0, 60), "stocks not in 1~80");
	EXPECT_EQ(CommissionProblem::ComputeCommission(50, 81, 45), "stocks not in 1~80");
	EXPECT_EQ(CommissionProblem::ComputeCommission(37, 52, 0), "barrels not in 1~90");
	EXPECT_EQ(CommissionProblem::ComputeCommission(44, 56, 91), "barrels not in 1~90");
}