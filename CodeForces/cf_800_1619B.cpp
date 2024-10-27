#include <bits/stdc++.h>

using ll = long long;

ll counter (ll n) {
    using namespace std;
    set<ll> a;

    for (ll i = 1; i * i <= n; i++) {
        a.insert(i * i);
    }

    for (ll i = 1; i * i * i <= n; i++) {
        a.insert(i * i * i);
    }

    return a.size();
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        cout << counter(n) << '\n';
    }

    return 0;
}