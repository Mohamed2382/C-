#include <iostream>
#include <cmath>
int main() {
	int X;
	std::cin >> X;

	int prime = 1;
	for (int i = 2; i <= std::sqrt(X); i++) {
		if (X % i == 0) {
			prime = 0;
			break;
		}

	}

	if (prime)
		std::cout << "YES";
	else
		std::cout << "NO";

}
