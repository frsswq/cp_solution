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

    if (s.empty()) {
        cout << 0 << endl;
        return 0;
    }

    if (s.size() == 1) {
        cout << 1 << endl;
        return 0;
    }

    int counter = 1;
    int max_counter = 0;

    for(int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            counter++;
        } else {
            counter = 1;
        }

        if (counter > max_counter) {
            max_counter = counter;
        }
    }

    cout << max_counter << '\n';

    return 0;
}