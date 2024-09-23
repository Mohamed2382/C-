#include <iostream>

int main() {
    float number_1, number_2;
    std::cin >> number_1 >> number_2;

    // Q1
    if (number_1 > 0 && number_2 > 0)
        std::cout << "Q1";
    // Q2
    else if (number_1 < 0 && number_2 > 0)
        std::cout << "Q2";
    // Q3
    else if (number_1 < 0 && number_2 < 0)
        std::cout << "Q3";
    // Q4
    else if (number_1 > 0 && number_2 < 0)
        std::cout << "Q4";
    // Origem
    else if (number_1 == 0 && number_2 == 0)
        std::cout << "Origem";
    // Eixo X
    else if (number_2 == 0)
        std::cout << "Eixo X";
    // Eixo Y
    else if (number_1 == 0)
        std::cout << "Eixo Y";

    return 0;
}
