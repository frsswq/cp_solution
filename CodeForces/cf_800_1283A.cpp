#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int h, m;
        cin >> h >> m;

        int sum = ((23 - h) * 60) + (60 - m);

        cout << sum << endl;
    }    

    return 0;
}