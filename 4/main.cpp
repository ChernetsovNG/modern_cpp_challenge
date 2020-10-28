#include <iostream>
#include <numeric>

bool is_prime(unsigned int x) {
    for (int i = 2; i < x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    unsigned int input;
    std::cout << "Enter an integer number >= 0: " << std::endl;
    std::cin >> input;

    unsigned int max_prime = 0;

    for (unsigned int i = input - 1; i >= 1; --i) {
        if (is_prime(i)) {
            max_prime = i;
            break;
        }
    }

    std::cout << "max prime < input = " << max_prime << std::endl;
}
