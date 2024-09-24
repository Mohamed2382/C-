#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int number, even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < N; i++) {
        std::cin >> number;

        // Check if the number is even or odd
        if (number % 2 == 0)
            even++;
        else
            odd++;

        // Check if the number is positive or negative
        if (number > 0)
            pos++;
        else if (number < 0)
            neg++;
    }

    std::cout << "Even: " << even << std::endl;
    std::cout << "Odd: " << odd << std::endl;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;

    return 0;
}

/*

#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int number, even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < N; i++) {
        std::cin >> number;

        // Switch to check even or odd
        switch (number % 2) {
            case 0:
                even++;
                break;
            case 1:
            case -1:
                odd++;
                break;
        }

        // Switch to check positive or negative
        switch ((number > 0) - (number < 0)) { // This gives 1 for positive, -1 for negative, and 0 for zero
            case 1:
                pos++;
                break;
            case -1:
                neg++;
                break;
        }
    }

    std::cout << "Even: " << even << std::endl;
    std::cout << "Odd: " << odd << std::endl;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Negative: " << neg << std::endl;

    return 0;
}


*/