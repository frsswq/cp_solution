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

    int sumX, sumY, sumZ;
    cin >> sumX >> sumY >> sumZ;

    for (int i = 0; i < n - 1; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    cout << (sumX == 0 && sumY == 0 && sumZ == 0 ? "YES" : "NO"
) << endl;

    return 0;
}