#include <iostream>

int main() {
    int N;
    std::cin >> N;


    int X  , max = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> X;
        if (X > max )
        	max = X;
    }
    std::cout << max;


    return 0;
}
