#include <iostream>
#include <vector>
#include <array>

int main()
{
	int num = 0;
	std::vector<int> h;
	std::vector<int> w;
	std::vector<int> n;

	std::cin >> num;

	for (int i = 0; i < num; i++) {
		int a, b, c;
		std::cin >> a >> b >> c;

		h.push_back(a);
		w.push_back(b);
		n.push_back(c);
	}

	for (int i = 0; i < num; i++) {
		int XX = 0;
		int YY = 0;
		if (h[i] >= n[i]) {
			XX = n[i];
		} else {
			if (n[i] % h[i] == 0) {
				XX = h[i];
			} else {
				XX = n[i] % h[i];
			}
		}

		if (h[i] >= n[i]) {
			YY = 1;
		} else {
			if (h[i] == 1) {
				YY = (n[i] / h[i]);
			} else {
				if (n[i] % h[i] == 0) {
					YY = (n[i] / h[i]);
				} else {
					YY = (n[i] / h[i]) + 1;
				}
			}
		}

		std::cout << (XX * 100) + YY << std::endl;
	}
}