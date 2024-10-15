#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

ll sumOfSquares (ll n) {
    ll sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }

    return sum;
}

ll squareOfSum (ll n) {
    ll sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    sum = pow(sum, 2);

    return sum;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    cout << abs(sumOfSquares(n) - squareOfSum(n)) << endl;   

    return 0;
}