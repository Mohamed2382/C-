#include <iostream>

int main() {
	int a, b , result ;
	char c , q ;

	std::cin >> a >> c >> b >> q >> result;

	int x = 0;

	if (c == '+'){
		x = a + b ;
		if (x == result){
			std::cout << "Yes";
		}
		else {
			std::cout << x;
		}
	}
	else if (c == '-'){
		x = a - b ;
		if (x == result){
			std::cout << "Yes";
		}
		else {
			std::cout << x;
		}
	}
	else if (c == '*'){
			x = a * b ;
			if (x == result){
				std::cout << "Yes";
			}
			else {
				std::cout << x;
			}
		}

}
