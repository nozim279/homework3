#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter Bob's apartment number (n) and apartments per floor (x): ";
    cin >> n >> x;

    if (n == 1 || n == 2) {
        cout << 1 << endl;
    } else {
        int floor = (n - 3) / x + 2;
        cout << floor << endl;
    }

    return 0;
}
