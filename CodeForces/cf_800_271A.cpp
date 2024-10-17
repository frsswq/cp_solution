#include <iostream>
#include <vector>
#include <string>
#include <set>

// more optimized solution, compare set sizes with the original int size would be better
// since set can only contain distinct number and would automatically ignore duplicate

// update, it's actually roughly the same speed idk why
// answer = i'm stupid

bool check_distinct (int y) {
	using namespace std;
	string year = to_string(y);
	set<char> digits(year.begin(), year.end());
	
	return digits.size() == year.size();
}


int main () {
	using namespace std;
	int n;
	cin >> n;
	
	while(true) {
		n++;
		if (check_distinct(n)) {
			cout << n;
			break;
		}
	}
	
	return 0;
}

// alternative solution

// int main () {
// 	using namespace std;
// 	int n;
// 	cin >> n;
// 	n += 1;
	
// 	vector<int> a(4);
// 	for (auto it = a.rbegin(); it != a.rend(); ++it) {
// 		*it = n % 10;
// 		n /= 10;
// 	}
	
// 	while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] || a[2] == a[3]) {
// 		a[3] += 1;
// 		if (a[3] == 10) {
// 			a[3] -= 10;
// 			a[2] += 1;
// 		} 
		
// 		if (a[2] == 10) {
// 			a[2] -= 10;
// 			a[1] += 1;
// 		}

// 		if (a[1] == 10) {
// 			a[1] -= 10;
// 			a[0] += 1;
// 		}
// 	}
	
// 	for (int& num : a) {
// 		cout << num;
// 	}
	
// 	return 0;
// }