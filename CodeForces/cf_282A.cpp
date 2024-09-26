#include <iostream>
#include <string>

int main () {
	using namespace std;
	int t; cin >> t;
	
	int count = 0;
	
	while(t--) {
		string x;
		cin >> x;
		
		x == "X++" || x == "++X" ? count++ : count--;
	}
	
	cout << count;
}