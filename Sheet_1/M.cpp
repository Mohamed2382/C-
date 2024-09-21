#include <iostream>

int main() {
    char character;
    std::cin >> character;

    // Check if the character is a lowercase letter
    if (character >= 'a' && character <= 'z') {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS SMALL" << std::endl;
    }
    // Check if the character is an uppercase letter
    else if (character >= 'A' && character <= 'Z') {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS CAPITAL" << std::endl;
    }
    // Check if the character is a digit
    else if (character >= '0' && character <= '9') {
        std::cout << "IS DIGIT" << std::endl;
    }
    // Handle other characters
    else {
        std::cout << "IS NOT ALPHA OR DIGIT" << std::endl;
    }

    return 0;
}
