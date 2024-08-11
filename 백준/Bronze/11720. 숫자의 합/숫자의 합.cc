#include <iostream>

int main()
{
	int N = 0;
	char num[100] = {0,};
	int int_num[100] = { 0, };
	int sum = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> num[i];
		sum += num[i] - '0';
	}

	std::cout << sum << std::endl;

}