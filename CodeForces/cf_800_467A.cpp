#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int counter = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (b - a >= 2) counter++;
    }

    cout << counter << endl;

    return 0;
}