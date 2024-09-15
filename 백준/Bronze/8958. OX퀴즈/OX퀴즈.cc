#include <iostream>
#include <string>

int main()
{
	int test_case_num = 0;

	std::cin >> test_case_num;

	std::string str;
	for (int i = 0; i < test_case_num; i++) {
		std::cin >> str;

		int num = 0, sum = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'O') {
				num++;
				sum += num;
			} else {
				num = 0;
			}
		}
		std::cout << sum << std::endl;
	}
}