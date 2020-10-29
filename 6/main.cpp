#include <iostream>

int main() {
    int input;
    std::cout << "Enter an integer number >= 0: " << std::endl;
    std::cin >> input;

    for (int i = 1; i <= input; ++i) {
        // проверяем каждое число на предмет избыточности
        int sum_of_divisors = 0;
        for (int k = 1; k < i; ++k) {
            if (i % k == 0) {  // k является делителем i
                sum_of_divisors += k;
            }
        }
        if (sum_of_divisors > i) {  // число i - избыточное
            double redundancy_amount = 1.0 * sum_of_divisors / i;
            std::cout << "i = " << i << ", redundancy_amount = " << redundancy_amount << std::endl;
        }
    }
}
