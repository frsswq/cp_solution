#include <bits/stdc++.h>

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.size();
    vector<string> a;

    string add = "";

    for (int i = 0; i < len; i++) {
        string check = s.substr(i, 3);

        if (check == "WUB") {
            if (add != "") {
                a.push_back(add);
                add = "";
            }

            i += 2;
        } else {
            add += s[i];
        }
    }

    if (add != "") {
        a.push_back(add);
        add = "";
    }    

    for (auto& s : a) {
        cout << s << " ";
    }

    return 0;
}