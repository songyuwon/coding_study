#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<int, 3> input;

    for (auto& a : input) {
        std::cin >> a;
    }

    int int_output = input[0] + input[1] - input[2];
    std::string add_string = std::to_string(input[0]) + std::to_string(input[1]);
    int char_output = std::stoi(add_string) - input[2];

    std::cout << int_output << std::endl;
    std::cout << char_output << std::endl;
}