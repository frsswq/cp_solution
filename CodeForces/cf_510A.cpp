#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// print # for every odd rows
// print #... for every multiplier of 4
// print ...# for every multiplier of 2

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int rows, column;
    cin >> rows >> column;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= column; j++) {
            if (i % 2 == 0 && i % 4 != 0) {
                if (j == column) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            } else if (i % 4 == 0) {
                if (j == 1) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            } else {
                cout << '#';
            }
        }

        cout << endl;
    }

    return 0;
}