#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char d;
    cin >> d;

    string s;
    cin >> s;

    int len = s.size();

    string a = "qwertyuiop";
    string b = "asdfghjkl;";
    string c = "zxcvbnm,./";

    for (int i = 0; i < len; i++) {
        char curr = s[i];
        size_t index;

        if ((index = a.find(curr)) != string::npos) {
            if (d == 'R') {
                size_t new_index = (index == 0) ? a.size() - 1 : (index - 1);
                s[i] = a[new_index];
            } else {
                size_t new_index = (index + 1) % a.size();
                s[i] = a[new_index];
            }    
        } else if ((index = b.find(curr)) != string::npos) {
            if (d == 'R') {
                size_t new_index = (index == 0) ? b.size() - 1 : (index - 1);
                s[i] = b[new_index];
            } else {
                size_t new_index = (index + 1) % b.size();
                s[i] = b[new_index];
            }
        } else if ((index = c.find(curr)) != string::npos) {
            if (d == 'R') {
                size_t new_index = (index == 0) ? c.size() - 1 : (index - 1);
                s[i] = c[new_index];
            } else {
                size_t new_index = (index + 1) % c.size();
                s[i] = c[new_index];
            }
        }
    }

    cout << s << endl;

    return 0;
}