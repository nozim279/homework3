#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a single-digit number: ";
    cin >> n;

    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int k = 0; k < (n - i) * 2; ++k) {
            cout << " ";
        }
        for (int j = i; j > 0; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
