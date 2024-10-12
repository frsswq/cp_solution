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

    int k;
    cin >> k;

    vector<int> a(12);
    int sum = 0;

    for (int& num : a) {
        cin >> num;
        sum += num;
    }
    

    if (sum < k) {
        cout << -1 << endl;
        return 0;
    }

    // grow flower no less than k

    int cur = 0;
    int counter = 0;

    while(cur < k) {
        int max = *max_element(a.begin(), a.end());
        auto it = find(a.begin(), a.end(), max);

        if (it != a.end()) {
            a.erase(it);
        }

        debug(a);

        cur += max;
        counter++;
    }

    cout << counter << endl;

    return 0;
}