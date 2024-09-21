#include <iostream>

int main() {
	int number;
	std::cin >> number;

	while (number >=10) {
		number /= 10;

	}

	if (number % 2 == 0)
		std::cout << "EVEN";
	else if (number % 2 != 0)
		std::cout << "ODD";


	return 0;
}
