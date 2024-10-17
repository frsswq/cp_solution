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
        vector<ll> a(3);

        for (ll& num : a) {
            cin >> num;
        }

        ll max_num = *max_element(a.begin(), a.end());
        ll max_count = count(a.begin(), a.end(), max_num);

        for (ll num : a) {
            if (max_count >= 2) {
                cout << (num == max_num ? 1 : max_num + 1 - num) << " ";
            } else {
                cout << (num == max_num ? 0 : max_num + 1 - num) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}