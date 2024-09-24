#include <iostream>

int main() {
	int N;
	std::cin >> N;
	long long fact = 1;
	int number;

	for (int i = 0; i < N; i++) {
		std::cin >> number;
		for (int i = 1; i <= number; i++) {

			fact *= i;

		}
		std::cout << fact << std::endl;
		fact = 1;

	}

	return 0;
}
