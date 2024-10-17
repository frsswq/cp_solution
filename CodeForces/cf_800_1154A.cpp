#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// i look at the editorial for this

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> x(4);

    for (int& num : x) {
        cin >> num;
    }

    sort(x.begin(), x.end());

    ll d = x[3];
    ll a = d - x[0];
    ll b = d - x[1];
    ll c = d - x[2];

    cout << a << " " << b << " " << c << endl; 

    return 0;
}