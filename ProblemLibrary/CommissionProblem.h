#pragma once
#include <string>

class CommissionProblem
{
public:
	static std::string ComputeCommission(int lockCount, int stockCount, int barrelCount);
	CommissionProblem();
	~CommissionProblem();
};

