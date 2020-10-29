#include <iostream>
#include <cmath>

int sum_proper_divisors(int const number) {
    int result = 1;
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) {
            result += (i == (number / i)) ? i : (i + number / i);
        }
    }
    return result;
}

int main() {
    int limit = 1'000'000;
    for (int i = 1; i < limit; ++i) {
        for (int j = 1; j < limit && j != i; ++j) {
            int sum_divisors_1 = sum_proper_divisors(i);
            int sum_divisors_2 = sum_proper_divisors(j);
            if (sum_divisors_1 == sum_divisors_2) {
                std::cout << "numbers " << i << " and " << j << " are friends" << std::endl;
            }
        }
    }
}
