#include <iostream>
#include <set>
#include <vector>

int main () {
	using namespace std;
	vector<int> a(4);
	
	for (int& num : a) {
		cin >> num;
	}
	
	set<int> res(a.begin(), a.end());
	int b = res.size();
	
	cout << abs(b - 4) << endl;
	
	return 0;
}