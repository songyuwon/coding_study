#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int main()
{
	std::string str;
	std::cin >> str;
	int input_int = std::stoi(str);
	int output = 0;
	int count = 0;

	for (int i = 1; i <= input_int; i++) {
		std::vector<int> digit(str.size());

		for (int j = 0; j < str.size(); j++) {
			int calc = i / std::pow(10, str.size() - (j + 1));
			digit[j] = calc % 10;
		}

		int sum = 0;
		for (auto& a : digit) {
			sum += a;
		}

		if (input_int == i + sum) {
			output = i;
			break;
		}

	}

	std::cout << output;
}