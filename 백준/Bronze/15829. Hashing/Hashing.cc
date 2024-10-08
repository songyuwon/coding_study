#include <iostream>
#include <string>
#include <cmath>
#include <map>

int main()
{
	static std::map<char, int> hash = { 
			std::make_pair('a', 1),
			std::make_pair('b', 2),
			std::make_pair('c', 3),
			std::make_pair('d', 4),
			std::make_pair('e', 5),
			std::make_pair('f', 6),
			std::make_pair('g', 7),
			std::make_pair('h', 8),
			std::make_pair('i', 9),
			std::make_pair('j', 10),
			std::make_pair('k', 11),
			std::make_pair('l', 12),
			std::make_pair('m', 13),
			std::make_pair('n', 14),
			std::make_pair('o', 15),
			std::make_pair('p', 16),
			std::make_pair('q', 17),
			std::make_pair('r', 18),
			std::make_pair('s', 19),
			std::make_pair('t', 20),
			std::make_pair('u', 21),
			std::make_pair('v', 22),
			std::make_pair('w', 23),
			std::make_pair('x', 24),
			std::make_pair('y', 25),
			std::make_pair('z', 26),
	};
	
	int num;
	std::cin >> num;
	std::string input;
	std::cin >> input;
	unsigned long long sum = 0;

	for (int i = 0; i < num; i++) {
		//unsigned long long pow_31 = static_cast<unsigned long long>(std::pow(31, i)) % 1234567891;
		unsigned long long pow_31 = 1;
		for (int j = 0; j < i; j++) {
			pow_31 = (pow_31 * 31) % 1234567891;
		}
		sum += static_cast<unsigned long long>(hash[input[i]] * pow_31) % 1234567891;
	}
	std::cout << sum % 1234567891 << std::endl;
}