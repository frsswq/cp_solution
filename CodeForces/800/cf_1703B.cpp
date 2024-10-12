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

        string s; 
        cin >> s;

        unordered_map<char, int> a;
        
        for (char& c : s) {
            a[c]++;
        }

        int score = 0;

        for (const auto& pair : a) {
            if (pair.second > 1) {
                score += pair.second + 1;
            } else {
                score += 2;
            }
        }

        cout << score << "\n";
    }

    return 0;
}