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
        ll x;
        cin >> x;

        cout << fixed << setprecision(0);

        cout << ceil(x * 1.0 / 2) - 1 << endl;
    }   

    return 0;
}