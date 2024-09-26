#include <iostream>

int main() {
	using namespace std;
	
	int t;
	cin >> t;
	
	int counter = 0;
	
	// better solution with less LoC
	
	for (int i = 0; i < t; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if (a + b + c >= 2) {
			counter++;
		}
	}
	
	// while(t--) {
		// int check = 0;
		// for (int i = 0; i < 3; i++) {
			// int x;
			// cin >> x;
			
			// check += x;
		// }
		
		// if (check >= 2) counter++;
	// }
	
	cout << counter;
	
	return 0;
}