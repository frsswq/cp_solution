#include <bits/stdc++.h>
#include <algorithm>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, vector<int>> a;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 3) continue;
        a[x].push_back(i + 1);
    }

    int sizes = min({a[1].size(), a[2].size(), a[3].size()});

    cout << sizes << endl;

    for (int i = 0; i < sizes; i++) {
        for (const auto& pair : a) {
            cout << pair.second[i] << " ";
        }

        cout << endl;
    }

    // better

    /*
    for (int i = 0; i < sizes; i++) {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i] << endl;
    }
    */

    return 0;
}