#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

// editorial use map<string, int> a. 

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        s[0] == 'T' ? sum += 4 :
        s[0] == 'C' ? sum += 6 :
        s[0] == 'O' ? sum += 8 :
        s[0] == 'D' ? sum += 12 :
        sum += 20;
    }

    cout << sum;

    return 0;
}