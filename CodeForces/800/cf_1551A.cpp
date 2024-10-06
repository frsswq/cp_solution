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
        ll n;
        cin >> n;

        ll b = n / 3;
        ll a = b;

        if (n - (b * 2 + a) == 1) {
            a += 1;
        } else if (n - (b * 2 + a) == 2) {
            b += 1;
        }

        // target = a + b * 2 = n;

        cout << a << " " << b << endl;
    }

    return 0;
}