#include <iostream>
#include <string>

int main() {
	using namespace std;
	
	int t;
	cin >> t;
	
	while(t--) {
		string s;
		cin >> s;
				
		if (s.length() <= 10) {
			cout << s << endl;
		} else {
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		}
	}
	
	return 0;
}