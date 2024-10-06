#include <bits/stdc++.h>

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

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int& num : a) {
            cin >> num;
        }

        for (int& num : b) {
            cin >> num;
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        debug(a, b);

        for (int i = 0; i < k; i++) {
            if (a[i] < b[i]) {
                swap(a[i], b[i]);
            }
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        cout << sum << endl;
    }

    return 0;
}