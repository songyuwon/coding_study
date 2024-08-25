#include <iostream>

static int leap_year(int year)
{
	if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0) {
		return 1;
	}

	return 0;
}

int main()
{
	int year = 0;

	std::cin >> year;
	std::cout << leap_year(year);
}