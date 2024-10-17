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

    ld n, l;
    cin >> n >> l;

    vector<ld> a(n);

    for (ld& num : a) {
        cin >> num;
    }

    sort(a.begin(), a.end());

    // find the max distance

    ld left = abs(0 - a[0]), right = abs(l - a[n - 1]), distance = 0;

    // check for distance

    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) > distance) distance = abs(a[i] - a[i + 1]);
    }

    distance /= 2;

    if (distance < max(left, right)) distance = max(left, right);

    cout << fixed << setprecision(10);

    cout << distance;   

    return 0;
}