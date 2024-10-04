#include <iostream>

int main () {
	using namespace std;
	int a, b;
	cin >> a >> b;
	
	int counter = 0;
	
	while(a <= b) {
		a *= 3;
		b *= 2;
		counter++;
	}
	
	cout << counter;
	
	return 0;
}