#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m >> x;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // vertikal atau horizontal
    char o;
    cin >> o;

    // derajat rotasi
    int p;
    cin >> p;


    // _ 270 == | 90
    // _ 180 == | 180
    // _ 90 == | 270


    // if ((o == '_' && p == 90) || (o == '|' && p == 270)) {
    //     // _ 90 or | 270

    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             b[i][j] = a[j][i];                   
    //         }
    //     }

    // } else if ((o == '_' && p == 180) || (o == '|' && p == 180)) {
    //     // _ 180 or | 180
        
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             int max_column = (m - 1) - j; 
    //             b[i][j] = a[i][max_column];                   
    //         }
    //     }

    // } else {
    //     // _ 270 or | 90

    //     for (int i = 0; i < n; i++) {
    //         int max_column = (n - 1) - i; 
    //         for (int j = 0; j < m; j++) {
    //             int max_row = (m - 1) - j;
    //             b[i][j] = a[max_row][max_column];                   
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << b[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    return 0;
}