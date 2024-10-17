#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                // swap (s[j], s[j+1]) are valid too
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }

    cout << s << endl;

    return 0;
}