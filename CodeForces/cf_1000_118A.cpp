#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define int long long

int32_t main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    for (char& c : s) {
        c = tolower(c);
    }

    vector<char> a;
    string vowels = "aiueoy";

    for (char& c : s) {
        if (vowels.find(c) == string::npos) {
            a.push_back(c);
        }
    } 

    for (int i = 0; i < a.size(); i++) {
        cout << '.' << a[i];
    }

    return 0;
}