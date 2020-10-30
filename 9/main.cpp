#include <iostream>
#include <cmath>

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
        // отмечаем все кратные числа как составные
        for (int k = 2; k * p <= input; ++k) {
            primes_array[p * k] = false;
        }
    }
    // все числа, для которые в массиве осталось true - простые
    if (primes_array[input]) {  // само число простое
        std::cout << input << " is prime number itself" << std::endl;
        return 0;
    }

    int m = input;
    bool first = true;

    std::cout << m << " = ";
    for (int i = 2; i < input && m > 1; ++i) {
        if (!primes_array[i]) {
            continue;
        }
        while (m % i == 0) {
            if (first) {
                std::cout << i;
                first = false;
            } else {
                std::cout << " * " << i;
            }
            m /= i;
        }
    }
    std::cout << std::endl;

    delete[] primes_array;
}
