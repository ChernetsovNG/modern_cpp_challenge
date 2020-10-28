#include <iostream>
#include <numeric>

int main() {
    unsigned int x1, x2;
    std::cout << "Enter a first integer number (>= 0): " << std::endl;
    std::cin >> x1;
    std::cout << "Enter a second integer number (>= 0): " << std::endl;
    std::cin >> x2;

    std::cout << "lcm = " << std::lcm(x1, x2) << std::endl;
}
