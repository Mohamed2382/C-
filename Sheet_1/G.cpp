#include <iostream>

int main() {
    long long N;
    
    // Read the input
    std::cin >> N;
    
    // Calculate the sum using the formula
    long long sum = N * (N + 1) / 2;
    
    // Print the result
    std::cout << sum << std::endl;
    
    return 0;
}
