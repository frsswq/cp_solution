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

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    
    return 0;
}