#include "CommissionProblem.h"

CommissionProblem::CommissionProblem()
{
}


CommissionProblem::~CommissionProblem()
{
}

std::string CommissionProblem::ComputeCommission(int lockCount, int stockCount, int barrelCount)
{
	if (lockCount == -1)
		return "end";
	if (lockCount < 1 || lockCount > 70)
		return "locks not in 1~70";
	if (stockCount < 1 || stockCount > 80)
		return "stocks not in 1~80";
	if (barrelCount < 1 || barrelCount > 90)
		return "barrels not in 1~90";
	
	int totalSum = 45 * lockCount + 30 * stockCount + 25 * barrelCount;
	if (totalSum <= 1000)
		return std::to_string(totalSum * 10 / 100);
	else if (totalSum <= 1800)
		return std::to_string(totalSum * 15 / 100);
	else
		return std::to_string(totalSum * 20 / 100);
}
