#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "! Keep building.\n";
    return 0;
}