#include <iostream>
#include <iomanip> // "input-output manipulators"
using namespace std;

int main() {
    // Constant value for pi
    const double PI = 3.141592653;

    // Variable to hold the radius
    double R;

    // Read the input value for R
    cin >> R;

    // Calculate the area of the circle
    double area = PI * R * R;

    // Output the area with 9 digits after the decimal point
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
