#include <iostream>
#include <string>
#include <set>

int main () {
    using namespace std;
    string s;
    cin >> s;

    set<char> a(s.begin(), s.end());

    cout << (a.size() % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

    return 0;
}