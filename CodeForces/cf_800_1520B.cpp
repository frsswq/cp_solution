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
        int n;
        cin >> n;

        if (n < 10) {
            cout << n << endl;
            continue;
        }

        string s = to_string(n);
        int first_num = s[0] - '0';
        int len = s.size();

        int min_num = 9 * (len - 1);
        
        string t = "11";

        for (int i = 0; i < len - 2; i++) {
            t += '1';
        }

        int divisor = stoi(t);

        cout << min_num + (n / divisor) << endl;
    }   

    return 0;
}