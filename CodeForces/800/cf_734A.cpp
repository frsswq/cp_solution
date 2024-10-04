#include <bits/stdc++.h>

int main () {
    using namespace std;
    int t;
    cin >> t;
    
    string s;
    cin >> s;

    int a = 0, d = 0;
        
    for (char& c : s) {
        c == 'D' ? d++ : a++;
    }

    cout << (a > d ? "Anton" : d > a ? "Danik" : "Friendship") << endl;

    return 0;
}