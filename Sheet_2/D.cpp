#include <iostream>

int main() {
    int X;


    int Correct = 1999;
    for (int i = 0; i < X; i++) {
        std::cin >> X;
        if (X == Correct){
        	std::cout << "Correct";
        	break;
        }
        else
        	std::cout << "Wrong" << std::endl;

    }


    return 0;
}
