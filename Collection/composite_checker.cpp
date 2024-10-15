#include <bits/stdc++.h>

using namespace std;

bool isComposite(int n) {
    if (n <= 3) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }

    return false;
}