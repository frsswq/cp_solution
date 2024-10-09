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

        vector<int> a(2 * n);

        int even = 0;
        int odd = 0;

        for (int& num : a) {
            cin >> num;
            num % 2 == 0 ? even++ : odd++;
        }

        cout << (even == odd ? "Yes" : "No") << endl;
    }   

    return 0;
}