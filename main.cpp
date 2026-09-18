#include <iostream>
#include <string>

int main() {
    std::string pseudo;
    std::cout << "Quel est votre pseudo : ";
    std::getline(std::cin, pseudo);
    //std::cin >> pseudo;
    std::cout << "Hello " << pseudo << "!!!" << std::endl;
    return 0;
}