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
        int n;
        cin >> n;

        int min_index = INT_MAX;
        int max_index = INT_MIN;
        int min_value = INT_MAX;
        int max_value = INT_MIN;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if (x > max_value) {
                max_value = x;
                max_index = i;
            }

            if (x < min_value) {
                min_value = x;
                min_index = i;
            }
        }

        int middle = ceil(n * 1.0 / 2);

        // check shortest distance
        int left_to_right = max(min_index, max_index);
        int right_to_left = max(n - min_index, n - max_index) + 1;
        int left_and_right = min(min_index, max_index) + min(n - min_index, n - max_index) + 1;

        cout << min({left_to_right, right_to_left, left_and_right}) << endl;
    }

    return 0;
}