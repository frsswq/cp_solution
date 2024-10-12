/*
ID: farissa1
LANG: C++
TASK: gift1
*/

#include <bits/stdc++.h>

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    
    ll n;
    fin >> n;

    vector<string> b(n);
    unordered_map<string, ll> a;

    for (int i = 0; i < n; i++) {
        string s;
        fin >> s;

        b[i] = s;
        a[s] = 0;
    }

    for (int i = 0; i < n; i++) {
        string giver;
        fin >> giver;

        ll money, person;
        fin >> money >> person;        

        if (person > 0) {
            ll divided = money / person;
            a[giver] -= divided * person;

            for (int i = 0; i < person; i++) {
                string s;
                fin >> s;

                a[s] += divided;
            }
        }
    }

    for (string& name : b) {
        fout << name << " " << a[name] << endl;
    }

    return 0;
}