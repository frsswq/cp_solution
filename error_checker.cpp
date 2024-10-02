#include <iostream>
using namespace std; 

// currently learning about error checking
// the goal should be get the output error without 
// interfering with the output of the code

int x = 10; // some important variable

inline void dbg() { cout << "x is " << x << "\n"; }

int main() {
    dbg(); 
    x = 5000; 
    dbg();  
}