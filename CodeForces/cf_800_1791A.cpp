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
        string s = "codeforces";
        char alphabet;
        cin >> alphabet;

        cout << (s.find(alphabet) != string::npos ? "YES" : "NO") << endl;
    }

    return 0;
}