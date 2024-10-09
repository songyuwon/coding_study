#include <iostream>
#include <string>
#include <vector>
#include <array>

static std::array<std::array<char, 8>, 8> chess_board_1 = { {
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
} };

static std::array<std::array<char, 8>, 8> chess_board_2 = { {
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
} };
 
int main()
{
	unsigned short N = 0;
	unsigned short M = 0;
	
	std::cin >> N >> M;

	std::vector<std::vector<char>> input(N, std::vector<char>(M, '0'));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			std::cin >> input[i][j];
		}
	}

	int x = 0, y = 0;

	int min = N * M;

	while (true) {
		int count1 = 0;
		int count2 = 0;
		for (int i = y; i < 8 + y; i++) {
			for (int j = x; j < 8 + x; j++) {
				if (input[i][j] != chess_board_1[i - y][j - x]) {
					count1++;
				}

				if (input[i][j] != chess_board_2[i - y][j - x]) {
					count2++;
				}
			}
		}
		
		if (count1 < count2) {
			if (min > count1) {
				min = count1;
			}
		} else {
			if (min > count2) {
				min = count2;
			}
		}

		x++;
		if (x + 8 > M) {
			y++;
			x = 0;
			if (y + 8 > N) {
				break;
			}
		}
	}

	std::cout << min << std::endl;

	return 0;
}