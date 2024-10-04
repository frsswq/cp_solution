#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<ll> a;

    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            a.insert(i);
        }
    }

    cout << a.size() << endl;

    return 0;
}