#include <iostream>
#include <vector>

std::vector<int> collatz(int n) {
    std::vector<int> result;
    int k = n;
    while (k != 1) {
        result.push_back(k);
        if (k % 2 == 0) {
            k /= 2;
        } else {
            k = 3 * k + 1;
        }
    }
    result.push_back(1);
    return result;
}

int main() {
    int max_n = 0;
    int max_size = 0;
    for (int i = 2; i < 1'000'000; ++i) {
        const std::vector<int> &res = collatz(i);
        auto size = res.size();
        if (size > max_size) {
            max_n = i;
            max_size = size;
        }
    }
    std::cout << max_n << " " << max_size << std::endl;
}
