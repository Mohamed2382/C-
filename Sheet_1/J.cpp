#include <iostream>

int main() {
    int A, B;

    // Input two integers
    std::cin >> A >> B;

    // Check if A is a multiple of B or B is a multiple of A
    if (A % B == 0 || B % A == 0) {
        std::cout << "Multiples" << std::endl;
    } else {
        std::cout << "No Multiples" << std::endl;
    }

    return 0;
}
