#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string to_roman(unsigned int value) {
    std::vector<std::pair<unsigned int, char const *>> roman{
            {1000, "M"},
            {900,  "CM"},
            {500,  "D"},
            {400,  "CD"},
            {100,  "C"},
            {90,   "XC"},
            {50,   "L"},
            {40,   "XL"},
            {10,   "X"},
            {9,    "IX"},
            {5,    "V"},
            {4,    "IV"},
            {1,    "I"}};
    std::string result;
    for (auto const &kvp : roman) {
        while (value >= kvp.first) {
            result += kvp.second;
            value -= kvp.first;
        }
    }
    return result;
}

int main() {
    int x;

    std::cout << "Input number:";
    std::cin >> x;

    if (x >= 4000) throw std::invalid_argument("too big decimal number");

    std::cout << to_roman(x) << std::endl;
}
