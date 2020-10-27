#include <iostream>

int gcd(int a, int b);

int main() {
    unsigned int x1, x2;
    std::cout << "Enter a first integer number (>= 0): " << std::endl;
    std::cin >> x1;
    std::cout << "Enter a second integer number (>= 0): " << std::endl;
    std::cin >> x2;

    unsigned int res = gcd(x1, x2);

    std::cout << "gcd = " << res << std::endl;
}

unsigned int gcd(unsigned int a, unsigned int b) {
    return !b ? a : gcd(b, a % b);
}
