#include <bits/stdc++.h>

using namespace std;

bool isPrime (int n) {
    if (n <= 3) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}