#include <iostream>
#include <string>

int main () {
    using namespace std;
    string s;
    cin >> s;
    
    s[0] = toupper(s[0]);

    cout << s << endl;

    return 0;
}