#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // the editorial are better than my code

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int len = s.size();
        int first_num = s[0] - '0';

        int curr_num = 0;
        int add = 1;

        for (char& c : s) {
            curr_num += add;
            add += 1;
        }

        int sum = 0;
        sum = (first_num - 1) * 10;

        cout << sum + curr_num << endl;
    }   

    return 0;
}