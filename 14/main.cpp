#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter ISBN-10 number:" << std::endl;
    std::getline(std::cin, input);
    std::cout << input << std::endl;
}
