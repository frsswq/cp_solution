#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // can be better with only one set and compare the set.size() with n
    
    set<int> z1;
    set<int> z2;

    for (int i = 1; i <= n; i++) {
        z1.insert(i);
    }

    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        z2.insert(x);
    }

    int b;
    cin >> b;

    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        z2.insert(x);
    }

    cout << (z1.size() == z2.size() ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}