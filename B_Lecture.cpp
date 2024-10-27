#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // vector<pair<string, string>> s(m);
    vector<string> s(m * 2);

    for (int i = 0; i < m * 2; i += 2) {
        string a, b;
        cin >> a >> b;

        if (b.size() < a.size()) {
            swap(a, b);
        }

        s[i] = a;
        s[i + 1] = b;

        // s[i] = make_pair(a, b);
    }

    vector<string> t(n);

    for (string& c : t) {
        cin >> c;

        for (int i = 0; i < s.size(); i += 2) {
            if (c == s[i]) {
                break;
            } else if (c == s[i + 1]) {
                c = s[i];
                break;
            }
        }

        cout << c << " ";
    }

    return 0;
}