#include <iostream>
#include <array>

int main()
{
	std::array<int, 9> input;
	int max = 0, cnt = 0, max_cnt = 0;
	for (auto& a : input) {
		cnt++;
		std::cin >> a;
		if (a > max) {
			max = a;
			max_cnt = cnt;
		}
	}

	std::cout << max << " " << max_cnt << std::endl;
}