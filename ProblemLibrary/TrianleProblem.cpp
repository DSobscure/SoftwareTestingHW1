#include "TriangleProblem.h"

TriangleProblem::TriangleProblem()
{
}


TriangleProblem::~TriangleProblem()
{
}

std::string TriangleProblem::TriangleType(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return "not a triangle";
	else if (a >= b + c || b >= a + c || c >= a + b)
		return "not a triangle";
	else if (a == b && b == c)
		return "equilateral";
	else if (a == b || b == c || a == c)
		return "isosceles";
	else
		return "scalene";
}
