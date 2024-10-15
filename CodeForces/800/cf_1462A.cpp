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

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        
        for (int& num : a) {
            cin >> num;
        }

        int left = 0;
        int right = n - 1;

        for (int i = 0; i < n / 2; i++) {
            cout << a[left] << " " << a[right] << " ";
            left += 1;
            right -= 1;
        }

        if (n % 2 != 0) {
            cout << a[left];
        }

        cout << "\n";
    }
    

    return 0;
}