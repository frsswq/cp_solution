#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> a;

    for (char c : s) {
        a.insert(c);
    }

    cout << (a.size() == 26 ? "YES" : "NO") << endl;

    return 0;
}