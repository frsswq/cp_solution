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
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, int> b;

        for (int& num : a) {
            cin >> num;
            b[num]++;
        }

        int index;

        for (int i = 0; i < n; i++) {
            if (b[a[i]] == 1) {
                index = i;
            }
        }

        cout << index + 1 << endl;
    }

    return 0;
}