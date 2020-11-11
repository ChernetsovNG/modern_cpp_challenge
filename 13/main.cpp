#include <iostream>
#include <algorithm>

int main() {
    double eps = 1e-4;

    double sum = 1.0;
    double delta = 1.0;

    int i = 1;
    while (delta > eps) {
        int term = i % 2 == 0 ? 1 : -1;
        double next = term * 1.0 / (2 * i + 1);

        double sum_next = sum + next;
        delta = std::abs(sum - sum_next);
        sum = sum_next;

        i++;
    }

    double pi = sum * 4;
    std::cout << "pi = " << pi << std::endl;
    std::cout << "count = " << i << std::endl;
}
