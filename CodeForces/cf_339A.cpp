#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>


int main () {
	using namespace std;
	string s;
	cin >> s;
	
	int len = s.size();
	int n = ceil(len * 1.0 / 2);
	vector<char> a(n);
	
	for (int i = 0, j = 0; i < len; i += 2, j++) {
		a[j] = s[i]; 
	}
	
	sort(a.begin(), a.end());
	
	cout << a[0];
	
	for (int i = 1; i < a.size(); i++) {
		cout << "+" << a[i];
	}
	
	cout << endl;
	
	return 0;
}