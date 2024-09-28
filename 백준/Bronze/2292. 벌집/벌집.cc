#include <iostream>
#include <string>
#include <cmath>
#include <map>

int main()
{
	unsigned long long input = 0;
	unsigned long long count = 0;
	unsigned long long sigma = 1;

	std::cin >> input;

	while (1) {
		if (sigma >= input) {
			count++;
			break;
		}

		sigma += (6 + 6 * count);
		count++;
	}

	std::cout << count;
}