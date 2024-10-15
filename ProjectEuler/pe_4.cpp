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

bool isPalindrome (ll sum) {
    using namespace std;
    string s = to_string(sum);

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll largest = 0;
    ll largest_n = 0;
    ll largest_k = 0;

    while (n > 100) {
        if (isPalindrome(n * k)) {
            if (n * k > largest) {
                largest = n * k;
                largest_n = n;
                largest_k = k;
            }
        }
 
        if (k == 999) {
            n--;
            k = 100;
        } else {
            k++;
        }
    }

    cout << largest_n << " " << largest_k << endl;
    cout << largest << endl;
  
    return 0;
}