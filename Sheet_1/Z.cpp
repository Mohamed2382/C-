#include <iostream>
#include <cmath>  // For log

int main() {
    long long A, B, C, D;

    // Input four values
    std::cin >> A >> B >> C >> D;

    // Compute B * log(A) and D * log(C)
    double X = B * std::log(A); // B * log(A)
    double Y = D * std::log(C); // D * log(C)

    // Compare the two values
    if (X > Y) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
