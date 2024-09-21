#include <iostream>

int main() {
    int number_1, number_2;
    char character;
    
    // Read two numbers and an operator
    std::cin >> number_1 >> character >> number_2;

    // Perform the operation based on the character
    if (character == '+') {
        std::cout << number_1 + number_2 << std::endl; // Addition
    } else if (character == '-') {
        std::cout << number_1 - number_2 << std::endl; // Subtraction
    } else if (character == '*') {
        std::cout << number_1 * number_2 << std::endl; // Multiplication
    } else if (character == '/') {
        if (number_2 != 0) {
            std::cout << number_1 / number_2 << std::endl; // Division
        } else {
            std::cout << "Error: Division by zero." << std::endl;
        }
    } else {
        std::cout << "Invalid operator." << std::endl; // Handle invalid operator
    }
   
    return 0;
}
