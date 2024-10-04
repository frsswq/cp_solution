#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a;
    cin >> n >> m >> a;
    int sum = ceil(n * 1.0 / a) * ceil(m * 1.0 / a);

    cout << sum << endl;

    return 0;
}