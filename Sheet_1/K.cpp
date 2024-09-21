#include <iostream>

int main() {
    int A, B, C;

    // Input three integers
    std::cin >> A >> B >> C;

    // Find the smallest and largest values
    int smallest = A, largest = A;

    if (B < smallest) smallest = B;
    if (C < smallest) smallest = C;

    if (B > largest) largest = B;
    if (C > largest) largest = C;

    // Output the smallest and largest values
    std::cout << smallest << " " << largest << std::endl;

    return 0;
}
