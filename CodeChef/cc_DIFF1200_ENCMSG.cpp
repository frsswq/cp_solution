#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        // for (int i = 0; i < n - 1; i += 2) are valid too
        for (int i = 0; i < n; i += 2) {
            if (i == n - 1) break;
            swap(s[i], s[i + 1]);
        }
        
        for (char& c : s) {
            c = 'a' - c + 'z';
        }
        
        cout << s << endl;
    }
}
