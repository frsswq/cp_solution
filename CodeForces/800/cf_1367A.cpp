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

        string a = "";
        
        for (int i = 0; i < s.size(); i +=2) {
            a += s[i];
        }

        a += s[s.size() - 1];

        cout << a << endl;
    }   

    return 0;
}