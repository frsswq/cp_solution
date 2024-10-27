#include <bits/stdc++.h>

using i64 = long long;

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
        i64 n, k;
        cin >> n >> k;

        i64 a = ceil(k * 1.0 / n);
        k *= a;

        cout << ceil(n * 1.0 / k) << endl;

        // cout <<  << endl;
    }   

    return 0;
}