#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main()
{
	std::string str;
	std::vector<std::string> vec_str;
	getline(std::cin, str);

	std::stringstream ss(str);


	std::string word;
	while (getline(ss, word, ' ')) {
		if (word == "") {
			continue;
		}
		vec_str.push_back(word);
	}

	std::cout << vec_str.size();
}