#include <iostream>
#include<array>

typedef enum class SST {
	ASCEN,
	DESCEN,
	MIX
} scale_state_t;

int main()
{
	std::array<int, 8> scale;
	scale_state_t state = SST::ASCEN;

	for (auto& arr : scale) {
		std::cin >> arr;
	}

	if (scale[0] > scale[1]) {
		for (int i = 1; i < scale.size() - 1; i++) {
			if (scale[i] < scale[i+1]) {
				state = SST::MIX;
				goto exit;
			}
		}
		state = SST::DESCEN;
	} else if (scale[0] < scale[1]) {
		for (int i = 1; i < scale.size() - 1; i++) {
			if (scale[i] > scale[i + 1]) {
				state = SST::MIX;
				goto exit;
			}
		}
		state = SST::ASCEN;
	}

	exit:
	switch (state) {
		default: {
			std::cout << "not defined scale state!" << std::endl;
			break;
		}
		case SST::ASCEN: {
			std::cout << "ascending" << std::endl;
			break;
		}
		case SST::DESCEN: {
			std::cout << "descending" << std::endl;
			break;
		}
		case SST::MIX: {
			std::cout << "mixed" << std::endl;
			break;
		}
	}

}