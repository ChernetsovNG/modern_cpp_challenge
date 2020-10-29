#include <iostream>
#include <cmath>
#include <unordered_set>

int sum_proper_divisors(int const number) {
    int result = 1;
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) {
            result += (i == (number / i)) ? i : (i + number / i);
        }
    }
    return result;
}

struct Hash {
    int operator()(const std::pair<int, int> &pair) const {
        int first = pair.first;
        int second = pair.second;
        return 31 * first + second;
    }
};

int main() {
    int limit = 1'000'000;
    std::unordered_set<std::pair<int, int>, Hash> set;

    int index = 1;
    for (int number = 4; number < limit; ++number) {
        auto sum1 = sum_proper_divisors(number);
        if (sum1 < limit) {
            auto sum2 = sum_proper_divisors(sum1);
            if (sum2 == number && number != sum1 && !set.count(std::make_pair(sum1, number))) {
                set.insert(std::make_pair(sum1, number));
                set.insert(std::make_pair(number, sum1));
                std::cout << index++ << ": " << number << "," << sum1 << std::endl;
            }
        }
    }
}
