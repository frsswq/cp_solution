#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// best solution b - a % b

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        cout << (a % b == 0 ? 0 : b - a % b) << endl;

        // my solution sucks

        // ll counter = 0;
        // ll c = b;

        // if (a < b) {
        //     cout << abs(a - b) << endl;
        //     continue;
        // }

        // while(b < a) {
        //     b += c;
        // }

        // cout << abs(a - b) << endl;
    }

    return 0;
}