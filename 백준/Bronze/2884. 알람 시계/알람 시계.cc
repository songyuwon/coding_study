#include <iostream>

int main()
{
	int H = 0;
	int M = 0;
	int temp_M = 0;
	int temp_H = 0;

	std::cin >> H;
	std::cin >> M;

	temp_M = M - 45;
	temp_H = H - 1;

	if (temp_M < 0) {
		if (temp_H < 0) {
			H = 23;
		} else {
			H = temp_H;
		} 
		M = 60 + temp_M;
	} else {
		M = temp_M;
	}

	std::cout << H << std::endl;
	std::cout << M << std::endl;


	return 0;
}