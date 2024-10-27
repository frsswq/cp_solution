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
        ll a, b, c;
        cin >> a >> b >> c;

        ll diff = abs(a - b);
        ll max_num = diff * 2;

        if (c > max_num || b > max_num || a > max_num) {
            cout << -1 << endl;
            continue;
        }

        if (c + diff == a || c + diff == b || c - diff == a || c - diff == b) {
            cout << -1 << endl;
            continue;
        }

        if (c > diff) {
            cout << c - diff << endl;
        } else {
            cout << c + diff << endl;
        }
    }

    return 0;
}