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

bool isPalindrome (std::string s) {
    using namespace std;

    int left = 0;
    int right = s.size() - 1;

    while (left <= right) {
        if (s[left] != s[right]) {
            return false;
        }

        left += 1;
        right -= 1;
    }

    return true;
}

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int len = s.size();
        bool isValid = true;

        // just check for the first and last
        
        for (int i = 0; i < 2; i++) {
            string temp_s = s;
            if (i % 2 == 0) {
                temp_s.insert(0, 1, 'a');
            } else {
                temp_s.insert(len, 1, 'a');
            }

            if (!isPalindrome(temp_s)) {
                cout << "YES" << endl;
                cout << temp_s << endl;
                isValid = false;
                break;
            }
        }

        // for (int i = 0; i < len; i++) {
        //     string temp_s = s;
        //     temp_s.insert(i, 1, 'a');

        //     if (!isPalindrome(temp_s)) {
        //         cout << "YES" << endl;
        //         cout << temp_s << endl;
        //         isValid = false;
        //         break;
        //     }
        // }

        if (isValid) {
            cout << "NO" << endl;
        }
    }   

    return 0;
}