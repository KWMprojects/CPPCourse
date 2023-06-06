#include <iostream>

int main(){
    int favorite_number;
    std::cout << "Enter your favorite number between 0 and 1: ";
    std::cin >> favorite_number;
    std::cout << "That's my favorite too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    return 0;
}