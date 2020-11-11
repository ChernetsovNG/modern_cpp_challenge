#include <iostream>
#include <vector>

void print_collatz(long long n) {
    long long k = n;
    while (k != 1) {
        std::cout << k << ' ';
        if (k % 2 == 0) {
            k /= 2;
        } else {
            k = 3 * k + 1;
        }
    }
    std::cout << 1 << std::endl;
}

std::pair<unsigned long long, long> longest_collatz(unsigned long long const limit) {
    long length = 0;
    unsigned long long number = 0;
    std::vector<int> cache(limit + 1, 0);

    for (unsigned long long i = 2; i <= limit; i++) {
        auto n = i;
        long steps = 0;
        while (n != 1 && n >= i) {
            if ((n % 2) == 0) n /= 2;
            else n = n * 3 + 1;
            steps++;
        }
        cache[i] = steps + cache[n];
        if (cache[i] > length) {
            length = cache[i];
            number = i;
        }
    }

    return std::make_pair(number, length);
}

int main() {
    auto pair = longest_collatz(1'000'000);
    auto number = pair.first;
    auto length = pair.second;
    std::cout << "number = " << number << ", length = " << length << std::endl;

    print_collatz(number);
}
