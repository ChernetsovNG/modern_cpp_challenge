#include <iostream>
#include <cassert>

int main() {
    int input;
    std::cout << "Please enter an integer number (>= 0): " << std::endl;
    std::cin >> input;
    assert(input >= 0);

    int sum = 0;
    for (int i = 0; i <= input; i++) {
        if (i % 3 == 0 and i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "sum = " << sum << std::endl;

    return 0;
}
