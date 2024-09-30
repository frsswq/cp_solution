#include <iostream>
#include <string>
#include <vector>

int main() {
	using namespace std;
	string a, b;
	cin >> a >> b;
	
	int len = a.size();
	vector<int> c(len);
	
	for (int i = 0; i < len; i++) {
		if (a[i] != b[i]) {
			c[i] = 1;
		} else {
			c[i] = 0;
		}
	}
	
	for (int& num : c) {
		cout << num;
	}
			
	return 0;
}