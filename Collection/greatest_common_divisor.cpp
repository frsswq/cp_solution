#include <bits/stdc++.h>

using namespace std;

int gcd (int x, int y) {
    while (x > 0 && y > 0) {
        x > y ? x = x % y : y = y % x;
    }

    return max(x, y);
}