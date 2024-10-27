#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

using ll = long long;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> a;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x < 0) {
                x *= -1;
            }
            a[x]++;
        }

        int sum = a.size();

        for (const auto& pair : a) {
            if (pair.first != 0 && pair.second > 1) {
                sum++;
            }
        }

        cout << sum << endl;
    }   

    return 0;
}