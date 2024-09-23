#include <iostream>
#include <cmath>

int main() {
	float number ;
	std::cin >> number ;


    // Check if N is an integer by comparing N with its truncated (integer) version
    int integerPart = static_cast<int>(number);
	double decimalPart = number - integerPart;
	if (number == integerPart)
        std::cout << "int " << integerPart << std::endl;

	else
        std::cout << "float " << integerPart << " " << decimalPart << std::endl;




}
