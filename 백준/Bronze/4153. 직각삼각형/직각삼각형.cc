#include <iostream>
#include<array>
#include<algorithm>

int main()
{
	constexpr int size = 3;

	std::array<int, size> input = { 0,};
	//int arr[size] = { 0, };
	
	while (true) {
		for (auto& arr : input) {
			std::cin >> arr;
		}

		if (input[0] != 0 || input[1] != 0 || input[2] != 0) {
			std::sort(input.begin(), input.end());

			int l_value = input[2] * input[2];
			int r_value = input[0]*input[0] + input[1]*input[1];
			
			std::string str = (l_value == r_value) ? "right" : "wrong";
			std::cout << str << std::endl;
		} else {
			break;
		}
	}

	return 0;
}