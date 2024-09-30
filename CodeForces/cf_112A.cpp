#include <iostream>
#include <string>

int main () {
	using namespace std;
	string s, t, a, b;
	
	cin >> s >> t;
	
	for (char c : s) {
		a += tolower(c);
	}
	
	for (char c : t) {
		b += tolower(c);
	}
		
	cout << (a < b ? -1 : b < a ? 1 : 0) << endl;
	
	return 0;
}