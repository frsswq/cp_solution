#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 12;
    int counter = 0;
    int len = 1;

    while(n--) {
        string s;
        cin >> s;

        if (s.size() == len) {
            counter++;
        }

        len++;
    }

    cout << counter << endl;

    return 0;
}