#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    vector<ll> a(n);
    
    for (ll& num : a) {
        cin >> num;
    }

    if (a.empty()) {
        cout << 0;
        return 0;
    }

    if (n == 1) {
        cout << 0;
        return 0;
    }

    ll counter = 0;

    for (ll i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            counter += abs(a[i - 1] - a[i]);
            a[i] = a[i - 1]; 
        }
    }

    cout << counter << endl;

    return 0;
}