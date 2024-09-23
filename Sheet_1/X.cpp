#include <iostream>

using namespace std;

int main() {
    long long l1, r1, l2, r2;

    // Read input
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the starting and ending points of the intersection
    long long start = (l1 > l2) ? l1 : l2;
    long long end = (r1 < r2) ? r1 : r2;

    // Check for valid intersection
    if (start <= end) {
        cout << start << " " << end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
