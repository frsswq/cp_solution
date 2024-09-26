#include <iostream>

int main () {
	using namespace std;
	
	unsigned long long t;
	cin >> t;
	
	unsigned long long sum = 0, esums = 0;
	
	for (unsigned long long i = 1; i < t; i++) {
		unsigned long long x;
		cin >> x;
		
		sum += x;
	}
	
	esums = (t * (t + 1) / 2);
	
	cout << esums - sum << endl;
	
	return 0;
}