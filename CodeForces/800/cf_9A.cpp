#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#ifndef ONLINE_JUDGE
#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

// i feel like this one makes my iq lower by 5 - 10 points

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int maxz = a > b ? a : b;
    int threshold = 6 - (maxz - 1);

    if (threshold <= 0) {
        cout << "0/0";
        return 0;
    } 
    
    if (threshold >= 6) {
        cout << "1/1";
        return 0;
    }
    
    vector<pair<int, string>> c = {
        {1, "1/6"},
        {2, "1/3"},
        {3, "1/2"},
        {4, "2/3"},
        {5, "5/6"},
        {6, "1/1"}
    };

    cout << c[threshold - 1].second << endl;

    return 0;
}