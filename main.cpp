#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= 2 * n - 1; ++i) {
            if (i == 2 * n - 1) {
                cout << 1 << endl;
                break;
            }
            if (i <= n) {
                cout << i << '+';
            } else {
                cout << n - (i - n) << '+';
            }
        }
    }
    return 0;
}