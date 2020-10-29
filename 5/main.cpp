#include <iostream>
#include <numeric>

bool is_prime(int const num) {
    if (num <= 3) { return num > 1; }
    else if (num % 2 == 0 || num % 3 == 0) {
        return false;
    } else {
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int input;
    std::cout << "Enter an integer number >= 0: " << std::endl;
    std::cin >> input;

    // массив для реализации решета Эратосфена
    bool *primes_array = new bool[input + 1];
    for (int i = 0; i < input + 1; ++i) {
        primes_array[i] = true;
    }
    primes_array[0] = false;
    for (int p = 2; p * p <= input; ++p) {
        if (!primes_array[p]) {
            continue;
        }
        for (int k = 2; k * p <= input; ++k) {
            primes_array[p * k] = false;
        }
    }

    // все числа, для которые в массиве осталось true - простые
    int index = 1;
    for (int i = 1; i < input + 1; ++i) {
        if (primes_array[i] and primes_array[i + 6] and i + 6 < input + 1) {
            std::cout << "sexy primes numbers[" << index++ << "]: " << i << " and " << i + 6 << std::endl;
        }
    }

    delete[] primes_array;

    return 0;
}
