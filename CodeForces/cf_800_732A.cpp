#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll temp = n;
    int counter = 1;

    while(temp % 10 != 0 && temp % 10 != k) {
        temp += n;
        counter++;
    }

    cout << counter << endl;

    return 0;
}