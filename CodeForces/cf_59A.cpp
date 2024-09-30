#include <bits/stdc++.h>

int main () {
    using namespace std;
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;

    // possible to use for each and check using tolower() or toupper()

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lower++;
        }
    }

    if (lower >= upper) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout << s << endl;

    return 0;
}