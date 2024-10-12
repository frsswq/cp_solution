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

    string s;
    cin >> s;

    int len = s.size();
    int counter = 0;

    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            counter++;
        }
    }

    bool allCaps;

    counter == len ? allCaps = true : allCaps = false;

    if (allCaps == true) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    if ((s[0] >= 'a' && s[0] <= 'z') && counter == len - 1) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
    }

    cout << s << endl;

    return 0;
}