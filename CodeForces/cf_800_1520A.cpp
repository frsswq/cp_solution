#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool isValid = true;
        vector<bool> done(26, false);
        
        // init the first number
        int num_first = s[0] - 'A';
        done[num_first] = true;

        for (int i = 1; i < n; i++) {
            int num = s[i] - 'A';
            if (done[num] && s[i - 1] != s[i]) {
                isValid = false;
                break;
            } else {
                done[num] = true;
            }
        }


        cout << (isValid ? "YES" : "NO") << endl;
    }   

    return 0;
}