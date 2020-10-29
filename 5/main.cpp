#include <iostream>

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
    int index = 1;
    for (int i = 1; i < input - 5; ++i) {
        if (primes_array[i] and primes_array[i + 6]) {
            std::cout << "sexy primes numbers[" << index++ << "]: " << i << " and " << i + 6 << std::endl;
        }
    }

    delete[] primes_array;
}
