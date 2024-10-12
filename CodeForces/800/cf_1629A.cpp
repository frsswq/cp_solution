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

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int& num : a) {
            cin >> num;
        }

        for (int& num : b) {
            cin >> num;
        }

        vector<pair<int, int>> c;

        for (int i = 0; i < n; i++) {
            c.push_back(make_pair(a[i], b[i]));
        }


        sort(c.begin(), c.end());
        
        for (const auto& pair : c) {
            if (k >= pair.first) {
                k += pair.second;
            }
        }

        cout << k << endl;
    }   

    return 0;
}