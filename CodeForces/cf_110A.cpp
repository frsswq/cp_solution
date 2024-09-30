#include <bits/stdc++.h>

int main () {
    using namespace std;
    long long n;
    cin >> n;

    string s = to_string(n);
    int lucky = 0;

    for (char c : s) {
        if (c == '4' || c == '7') lucky++;
    }

    cout << (lucky == 4 || lucky == 7 ? "YES" : "NO") << endl;
    return 0;
}