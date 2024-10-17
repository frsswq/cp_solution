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
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::toupper);

        cout << (s == "YES" ? "YES" : "NO") << endl;
    }

    return 0;
}