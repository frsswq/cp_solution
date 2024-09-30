#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int maxCap = 0;
    int inBus = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        inBus -= a;
        inBus += b;
        
        maxCap = max(inBus, maxCap);
    }

    cout << maxCap << endl;

    return 0;
}