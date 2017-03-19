#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/TriangleProblem.h"


TEST(TriangleProblemNormalTest, Test1)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 1), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test2)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 2), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test3)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 100), "Equilateral");
}
TEST(TriangleProblemNormalTest, Test4)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 199), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test5)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 200), "Not a triangle");
}
TEST(TriangleProblemNormalTest, Test6)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 1, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test7)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 2, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test8)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 100), "Equilateral");
}
TEST(TriangleProblemNormalTest, Test9)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 199, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test10)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 200, 100), "Not a triangle");
}
TEST(TriangleProblemNormalTest, Test11)
{
	EXPECT_EQ(TriangleProblem::TriangleType(1, 100, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test12)
{
	EXPECT_EQ(TriangleProblem::TriangleType(2, 100, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test13)
{
	EXPECT_EQ(TriangleProblem::TriangleType(100, 100, 100), "Equilateral");
}
TEST(TriangleProblemNormalTest, Test14)
{
	EXPECT_EQ(TriangleProblem::TriangleType(199, 100, 100), "Isosceles");
}
TEST(TriangleProblemNormalTest, Test15)
{
	EXPECT_EQ(TriangleProblem::TriangleType(200, 100, 100), "Not a triangle");
}
