#include <iostream>

int main() {
    char character;
    std::cin >> character;

    // Check if the character is a lowercase letter
    if (character >= 'a' && character <= 'z') {
        std::cout << (char)(character - 32) << std::endl; // Convert to uppercase
    }
    // Check if the character is an uppercase letter
    else if (character >= 'A' && character <= 'Z') {
        std::cout << (char)(character + 32) << std::endl; // Convert to lowercase
    }
    // Handle non-alphabetic characters
    else {
        std::cout << "Not an alphabetic character." << std::endl;
    }

    return 0;
}
