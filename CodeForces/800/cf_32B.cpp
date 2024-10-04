#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-' && s[i+1] == '-') {
            cout << 2;
            i++;
        } else if (s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i++;
        } else {
            cout << 0;
        }
    }

    return 0;
}