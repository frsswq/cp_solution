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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        
        for (int& num : a) {
            cin >> num;
        }

        int index_check = 0;

        while (k > 0) {
            if (a[index_check] == 0) {
                index_check += 1;
            }

            int lowered = a[index_check];
            int target_index = 0;
            
            for (int i = index_check + 1; i < n; i++) {
                if (a[i] > lowered) {
                    target_index = i;
                    break;
                }
            }

            while(a[target_index] > lowered && k > 0) {
                lowered -= 1;
                a[target_index] += 1;
                k--;
            }

            debug(lowered, k);
        }

        for (int& num : a) {
            cout << num <<  " ";
        }

        cout << "\n";

    }   

    return 0;
}