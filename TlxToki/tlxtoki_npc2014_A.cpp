#include <iostream>
#include <string>

// saya lihat solusi orang lain

int main () {
	using namespace std;
	unsigned long long a, b, c, d, average = 0, sum = 0;
	cin >> a >> b >> c >> d;
	sum = a + b + c + d;
	average = sum / 4;
	string s = "";
	
	sum % 4 == 0 ? s = ",00" :
	sum % 4 == 1 ? s = ",25" :	
	sum % 4 == 2 ? s = ",50" :
	s = ",75";
	
	cout << "Rp " << average << s << endl;
	
	return 0;
}