#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(m);

    for (int& num : a) {
        cin >> num;
    }

    sort(a.begin(), a.end());

    debug(a);

    int smallest_diff = INT_MAX;

    for (int i = 0; i <= m - n; i++) {
        if (abs(a[i] - a[n - 1 + i]) < smallest_diff) {
            smallest_diff = abs(a[i] - a[n - 1 + i]);
        }
        debug(smallest_diff);
    }

    cout << smallest_diff << endl;

    // if (abs(a[0] - a[n - 1]) <= abs(a[m - 1] - a[m - n])) {
    //     cout << abs(a[0] - a[n - 1]) << '\n';
    // } else {
    //     cout << abs(a[m - 1] - a[m - n]) << '\n';
    // }

    return 0;
}