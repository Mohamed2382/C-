#include <iostream>
#include <cmath> // For floor, ceil, round functions

int main() {
	double A, B;

	// Read the input
	std::cin >> A >> B;

	// Compute the division result as a floating-point number
	double result = (A) / B;

	// Calculate floor, ceil, and round values
	int floor_result = std::floor(result);
	int ceil_result = std::ceil(result);
	int round_result = std::round(result);

	// Print the results in the specified format
	std::cout << "floor " << A << " / " << B << " = " << floor_result
			<< std::endl;
	std::cout << "ceil " << A << " / " << B << " = " << ceil_result
			<< std::endl;
	std::cout << "round " << A << " / " << B << " = " << round_result
			<< std::endl;

	return 0;
}
