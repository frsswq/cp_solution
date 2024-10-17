#include <iostream>

int main () {
	using namespace std;
	int t;
	cin >> t;
	
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		cout << (a != b && a != c ? a : b != a && b != c ? b : c) << endl;
	}
	
	return 0;
}