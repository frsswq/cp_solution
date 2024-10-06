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
        string s1, s2;

        cin >> s1 >> s2;

        swap(s1[0], s2[0]);

        cout << s1 << " " << s2 << endl;
    }   

    return 0;
}