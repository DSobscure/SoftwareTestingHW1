#include "NextDateProblem.h"

NextDateProblem::NextDateProblem()
{
}


NextDateProblem::~NextDateProblem()
{
}

std::string NextDateProblem::GetNextDate(int month, int day, int year)
{
	if (month < 1 || month > 12)
		return "invalid input date";
	bool isChangeMonth = false, isChangeYear = false;
	switch (month)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		if (day < 1 || day > 31)
			return "invalid input date";
		if (day == 31)
		{
			isChangeMonth = true;
			if (month == 12)
				isChangeYear = true;
		}
		break;
	case 2:
		if (year % 4 == 0 && (!(year % 100 == 0) || (year % 400 == 0)))
		{
			if (day < 1 || day > 29)
				return "invalid input date";
			if(day == 29)
				isChangeMonth = true;
		}
		else
		{
			if (day < 1 || day > 28)
				return "invalid input date";
			if (day == 28)
				isChangeMonth = true;
		}
		break;
	case 4:case 6:case 9:case 11:
		if (day < 1 || day > 30)
			return "invalid input date";
		if (day == 30)
			isChangeMonth = true;
		break;
	default:
		return "invalid input date";
	}
	if (isChangeYear)
		return "1/1/" + std::to_string(++year);
	else if(isChangeMonth)
		return std::to_string(++month) + "/1/" + std::to_string(year);
	else
		return std::to_string(month) + "/" + std::to_string(++day) + "/" + std::to_string(year);

}
