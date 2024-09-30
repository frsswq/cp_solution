#include <iostream>
#include <string>
#include <algorithm>

int main() {
	using namespace std;
    string s;
    cin >> s;
    
    s.erase(remove(s.begin(), s.end(), '.'), s.end());
    
    cout << s << endl;
    return 0;
}