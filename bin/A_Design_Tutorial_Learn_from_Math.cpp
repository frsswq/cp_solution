#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << endl;
        return 0;
    }

    ll x = 0, y = n;
    
    for (int i = 0; i < n / 2; i++) {
        
    }

    cout << x << " " << y << endl;   

    return 0;
}