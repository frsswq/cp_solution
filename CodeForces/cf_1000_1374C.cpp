#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;

        cin >> n >> s;
        int len = s.size();

        unordered_map<char, int> bracket;
        int counter = 0;

        for (int i = 0; i < len; i++) {
            bracket[s[i]]++;

            if (s[i] == ')' && bracket['('] > 0) {
                bracket[s[i]]--;
                bracket['(']--;
            }
        }

        cout << bracket['('] << endl;
     }   

    return 0;
}