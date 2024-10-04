#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);
    ll max = 0;

    for (ll& num : a) {
        cin >> num;
        if (num > max) max = num;
    }

    ll sum = 0;

    for (ll& num : a) {
        sum += max - num;
    }

    cout << sum << endl;

    return 0;
}