#include <iostream>
#include <numeric>

int main() {
    unsigned int x1, x2;
    std::cout << "Enter a first integer number (>= 0): " << std::endl;
    std::cin >> x1;
    std::cout << "Enter a second integer number (>= 0): " << std::endl;
    std::cin >> x2;

    unsigned int gcd = std::gcd(x1, x2);

    unsigned int lcm = x1 * x2 / gcd;

    std::cout << "lcm = " << lcm << std::endl;
}
