#include <iostream>

int main () {
	using namespace std;
	int a, b;
	cin >> a >> b;
	
	while (b--) {
		if (a % 10 != 0) {
			a -= 1;
		} else {
			a /= 10;
		}
	}
	
	cout << a;
	
	return 0;
}