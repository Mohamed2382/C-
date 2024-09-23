#include <iostream>
#include <string>

int main() {
    int A, B;
    char S; // Comparison symbol
    std::cin >> A >> S >> B; // Read input

    bool result = false; // Variable to hold the result of the comparison

    // Perform the comparison based on the symbol S
    if (S == '<') {
        result = (A < B);
    } else if (S == '>') {
        result = (A > B);
    } else if (S == '=') {
        result = (A == B);
    }

    // Output the result
    if (result) {
        std::cout << "Right" << std::endl;
    } else {
        std::cout << "Wrong" << std::endl;
    }

    return 0;
}
