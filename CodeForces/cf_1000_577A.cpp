#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using i64 = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 n, x;
    cin >> n >> x;

    if (x == 1 || x == n * n) {
        cout << 1 << endl;
        return 0;
    } 

    if (x > n * n) {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;

    // binary search
    for (int i = 1; i <= n; i++) {
        i64 left = 1, right = n;
        while (left <= right) {
            i64 mid = left + (right - left) / 2;
            if (i * mid == x) {
                count++;
                break;
            } else if (i * mid < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    cout << count << endl;

    // naive approach (memory limit exceeded)
    //
    // vector<vector<i64>> vec(n, vector<i64>(n));
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         vec[i][j] = (i + 1) * (j + 1);
    //         if (vec[i][j] == x) {
    //             count++;
    //         }
    //     }
    // }

    return 0;
}