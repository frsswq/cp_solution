#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> a(n);
	
	int smallest = 1e5;
	
	for (int& num : a) {
		cin >> num;
		if (num == 0) {
			cout << 0 << "\n";
			return 0;
		}
		
		smallest = min(smallest, abs(num));
	}

	cout << smallest << "\n";
	
	return 0;
}