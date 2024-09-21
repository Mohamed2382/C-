#include <iostream>
#include <string>

int main() {
    // Declare variables for the first and second names of both persons
    std::string F1, S1, F2, S2;

    // Input first and second name of the first person
    std::cin >> F1 >> S1;

    // Input first and second name of the second person
    std::cin >> F2 >> S2;

    // Check if the second names (last names) are the same
    if (S1 == S2) {
        std::cout << "ARE Brothers" << std::endl;
    } else {
        std::cout << "NOT" << std::endl;
    }




    return 0;
}
