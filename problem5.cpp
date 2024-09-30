#include <iostream>
using namespace std;

bool isIgnored(int num) {
    if (num % 3 == 0) {
        return true;
    }
    if (num % 10 == 3) {
        return true;
    }
    return false;
}

int main() {
    int N;
    cout << "Enter position N: ";
    cin >> N;

    int count = 0, num = 0;

    while (count < N) {
        ++num;
        if (!isIgnored(num)) {
            ++count;
        }
    }

    cout << num << endl;

    return 0;
}
