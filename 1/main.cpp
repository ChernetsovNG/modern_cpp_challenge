#include <iostream>

int main() {
    unsigned int input;
    std::cout << "Please enter an integer number (>= 0): " << std::endl;
    std::cin >> input;

    unsigned long long sum = 0;
    for (unsigned int i = 3; i < input; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "sum = " << sum << std::endl;
}
