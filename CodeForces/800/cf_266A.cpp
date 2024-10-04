#include <iostream>
#include <string>

int main () {
	using namespace std;
	int n, counter = 0;
	string s;
	cin >> n >> s; 
			
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == s[i + 1]) {
			counter++;
		}
	}
	
	cout << counter;
	
	return 0;
}