#include <iostream>

int main() {
    long long A, B, C, D;

    // Input four values
    std::cin >> A >> B >> C >> D;

    // Calculate the last two digits of the product
    long long mult = (A % 100) * (B % 100) * (C % 100) * (D % 100)  % 100;


    // If the last two digits are 0, print "00"
    if (mult == 0) {
        std::cout << "00";
    } else {
        // Otherwise, print the actual last two digits with leading zero if needed
        std::cout << (mult < 10 ? "0" : "") << mult;
    }

    return 0;
}
