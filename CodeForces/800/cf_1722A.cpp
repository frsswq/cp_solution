#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

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

        string s;
        cin >> s;

        if (s.size() != 5) {
            cout << "NO" << endl;
            continue;
        }

        set<char> a(s.begin(), s.end());

        string b = "Timur";
        bool isTrue = true;

        for (char& c : b) {
            if (a.find(c) == a.end()) {
                isTrue = false;
                break;
            }
        }

        cout << (isTrue ? "YES" : "NO") << endl;

    }   

    return 0;
}