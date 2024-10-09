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

    vector<ll> a(n), b(n);

    // ll max_a = LLONG_MIN, max_b = LLONG_MIN;

    // for (ll& num : a) {
    //     cin >> num;
    //     if (num > max_a) {
    //         max_a = num;
    //     }
    // }

    // for (ll& num : b) {
    //     cin >> num;
    //     if (num > max_b) {
    //         max_b = num;
    //     }
    // }

    // more efficient

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a[i] = x; 
    }

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        b[i] = x; 
    }

    ll max_a = *max_element(a.begin(), a.end());
    ll max_b = *max_element(b.begin(), b.end());

    cout << max_a + max_b << endl;

    return 0;
}