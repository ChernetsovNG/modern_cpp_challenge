#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>

bool is_valid_isbn_10(std::string &isbn) {
    // удаляем все дефисы
    isbn.erase(std::remove(isbn.begin(), isbn.end(), '-'), isbn.end());

    auto valid = false;
    if (isbn.size() == 10 && std::count_if(std::begin(isbn), std::end(isbn), isdigit) == 10) {
        auto w = 10;
        /*
         * валидный ISBN-10, если сумма всех цифр, умноженных на их веса (номера позиций), кратна 11
         * первая цифра умножается на вес 10, вторая на 9, и так далее, последняя - на 1
         */
        auto sum = std::accumulate(std::begin(isbn), std::end(isbn), 0, [&w](int const total, char const c) {
            return total + w-- * (c - '0');
        });
        valid = !(sum % 11);
    }
    return valid;
}

int main() {
    std::string input;
    std::cout << "Enter ISBN-10 number:" << std::endl;
    std::getline(std::cin, input);
    std::cout << (is_valid_isbn_10(input) ? "valid" : "invalid") << std::endl;
}
