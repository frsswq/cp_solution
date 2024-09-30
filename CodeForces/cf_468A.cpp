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
    int sum;

    n % 2 == 0 ? sum = n / 2 : sum = (n + 1) / 2 * -1;

    cout << sum << endl;
    
    return 0;
}