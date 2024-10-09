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
        ull n;
        cin >> n;

        vector<ull> a(n);

        for (ull& num : a) {
            cin >> num;
        }

        sort(a.begin(), a.end());

        ull min_num = a[0];
        ull max_num = a[a.size() - 1];

        if (min_num == max_num) {
            cout << n * (n - 1) << endl;
            continue;
        };

        ull min_counter = 0;
        ull max_counter = 0;

        for (int i = 0; i < n && a[i] == min_num; i++) {
            if (a[i] == min_num) {
                min_counter++;
            }
        }

        for (int i = n - 1; i >= 0 && a[i] == max_num; i--) {
            if (a[i] == max_num) {
                max_counter++;
            }
        }

        cout << 2 * (min_counter * max_counter) << endl;
     }
    

    return 0;
}