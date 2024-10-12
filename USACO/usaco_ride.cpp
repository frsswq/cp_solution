/*
ID: farissa1
LANG: C++
PROG: ride
TASK: ride
*/

#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet, group;

    fin >> comet >> group;

    ll sum_a = 1, sum_b = 1;

    for (int i = 0; i < comet.size(); i++) {
        sum_a *= comet[i] - 'A' + 1;
    }

    for (int i = 0; i < group.size(); i++) {
        sum_b *= group[i] - 'A' + 1;
    }

    fout << (sum_a % 47 == sum_b % 47 ? "GO" : "STAY") << endl;

    return 0;
}