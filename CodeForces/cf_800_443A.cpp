#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> a;
    string s;

    getline(cin, s);

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
        a.insert(c);
        }
    }

    cout << a.size() << endl;

    return 0;
}