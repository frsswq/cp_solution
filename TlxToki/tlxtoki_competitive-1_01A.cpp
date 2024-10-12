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

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // for (int i = n - 1; i >= 0; i--) {
    //     for (int j = 0; j < m; j++) {
    //         debug(a[i][j]);
    //     }
    // }

    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            int right = (n - 1) - i;
            b[j][right] = a[i][j];

            cout << b[j][right] << " ";
        }

        cout << endl;
    }
}