#include <iostream>

int main() {
    int N;
    std::cin >> N;

    bool has_even = false;  // To track if any even number is printed

    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
            has_even = true;
        }
    }

    // If no even numbers were printed, print -1
    if (!has_even) {
        std::cout << -1 << std::endl;
    }

    return 0;
}
