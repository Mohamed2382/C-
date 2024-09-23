#include <iostream>

int main() {
    int age;
    std::cin >> age;

    int years = age / 365;
    age %= 365;  // Remaining days after accounting for full years

    int months = age / 30;
    age %= 30;   // Remaining days after accounting for full months

    int days = age;  // Remaining days

    std::cout << years << " years" << std::endl;
    std::cout << months << " months" << std::endl;
    std::cout << days << " days" << std::endl;

    return 0;
}
