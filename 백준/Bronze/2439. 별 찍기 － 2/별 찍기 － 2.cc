#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string star = "*";
	int input_num = 0;
	std::cin >> input_num;

	for (int i = 0; i < input_num; i++) {
		std::cout << std::setw(input_num) << std::right << star << std::endl;
		star += "*";
	}
}
