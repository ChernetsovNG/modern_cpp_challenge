#include <iostream>
#include <numeric>

unsigned int gcd(unsigned int const a, unsigned int const b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    unsigned int x1, x2;
    std::cout << "Enter a first integer number (>= 0): " << std::endl;
    std::cin >> x1;
    std::cout << "Enter a second integer number (>= 0): " << std::endl;
    std::cin >> x2;

    unsigned int res = std::gcd(x1, x2);

    std::cout << "gcd = " << res << std::endl;
}
