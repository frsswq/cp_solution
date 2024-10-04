#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int groups = 0;
    vector<int> a(n);

    for (int& num : a) {
        cin >> num;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != a[i+1]) groups++;
    }

    cout << groups << endl;

    return 0;
}