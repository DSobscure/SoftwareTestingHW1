#include "stdafx.h"
#include "gtest/gtest.h"
#include "../ProblemLibrary/InitialTest.h"


TEST(InitialTests, One)
{
	InitialTest it;
	EXPECT_EQ(1, it.One());
}

TEST(InitialTests2, One)
{
	InitialTest it;
	EXPECT_EQ(1, it.One());
}