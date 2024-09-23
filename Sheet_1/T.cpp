#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    // First, find the smallest value
    if (A <= B && A <= C) {
        std::cout << A << std::endl; // A is the smallest
        if (B <= C) {
            std::cout << B << std::endl << C << std::endl;
        } else {
            std::cout << C << std::endl << B << std::endl;
        }
    } else if (B <= A && B <= C) {
        std::cout << B << std::endl; // B is the smallest
        if (A <= C) {
            std::cout << A << std::endl << C << std::endl;
        } else {
            std::cout << C << std::endl << A << std::endl;
        }
    } else {
        std::cout << C << std::endl; // C is the smallest
        if (A <= B) {
            std::cout << A << std::endl << B << std::endl;
        } else {
            std::cout << B << std::endl << A << std::endl;
        }
    }

    // Print an empty line
    std::cout << std::endl;

    // Print the original values
    std::cout << A << std::endl << B << std::endl << C << std::endl;

    return 0;
}
