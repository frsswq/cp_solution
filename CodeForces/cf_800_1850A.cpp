#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int x = INT_MIN, y = INT_MIN;

        for (int i = 0; i < 3; i++) {
            int a;
            cin >> a;

            if (a >= x) {
                y = x;
                x = a;
            } else if (a < x && a >= y) {
                y = a;
            }
        }

        cout << (x + y >= 10 ? "YES" : "NO") << endl;
    }

    return 0;
}