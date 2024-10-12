/*
ID: farissa1
TASK: test
LANG: C++
*/

#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;

    fin >> a >> b;
    fout << a + b << endl;

    return 0;
}