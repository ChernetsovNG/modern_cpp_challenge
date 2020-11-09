#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string to_roman_helper(int n, int k) {
    std::vector<char> v;

    if (k == 3) {
        for (int i = 0; i < n; ++i) {
            v.push_back('M');
        }
    } else {
        char A, B, C;
        if (k == 0) {
            A = 'I';
            B = 'V';
            C = 'X';
        } else if (k == 1) {
            A = 'X';
            B = 'L';
            C = 'X';
        } else if (k == 2) {
            A = 'C';
            B = 'D';
            C = 'M';
        }
        if (n >= 0 && n <= 3) {
            for (int i = 0; i < n; ++i) {
                v.push_back(A);
            }
        } else if (n >= 4 && n <= 8) {
            if (n > 5) {
                for (int i = 0; i < n - 5; ++i) {
                    v.push_back(A);
                }
                v.push_back(B);
            } else {
                v.push_back(B);
                for (int i = 0; i < 5 - n; ++i) {
                    v.push_back(A);
                }
            }
        } else if (n == 9) {
            v.push_back(C);
            v.push_back(A);
        }
    }

    std::reverse(v.begin(), v.end());
    return std::string(v.begin(), v.end());
}

std::string to_roman(int x) {
    int n0, n1, n2, n3;

    n0 = x % 10;
    n1 = (x % 100) / 10;
    n2 = (x % 1000) / 100;
    n3 = x / 1000;

    const std::string &r3 = to_roman_helper(n3, 3);
    const std::string &r2 = to_roman_helper(n2, 2);
    const std::string &r1 = to_roman_helper(n1, 1);
    const std::string &r0 = to_roman_helper(n0, 0);

    return r3 + r2 + r1 + r0;
}

int main() {
    int x;

    std::cout << "Input number:";
    std::cin >> x;

    if (x >= 4000) throw std::invalid_argument("too big decimal number");

    std::cout << to_roman(x) << std::endl;
}
