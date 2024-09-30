#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, h;
    cin >> n >> h;

    int counter = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        x > h ? counter += 2 : counter += 1;
    }

    cout << counter << endl;

    return 0;
}