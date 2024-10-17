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
        int n;
        cin >> n;

        cout << "Division " << (
            n >= 1900 ? 1 :
            n >= 1600 ? 2 :
            n >= 1400 ? 3 :
            4
        ) << endl;
    }

    return 0;
}