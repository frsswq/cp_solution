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

        string target = "codeforces";
        int counter = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != target[i]) {
                counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}