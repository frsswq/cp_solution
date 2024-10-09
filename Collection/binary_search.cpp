#include <bits/stdc++.h>

using namespace std;

// time complexity: O(log n)

int binarysearch (vector<int>& number, int target) {
    int left = 0;
    int right = number.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (number[middle] == target) {
            return middle;
        }

        if (number[middle] < target) {
            // move right by making left higher than middle
            left = middle += 1;
        } else {
            // move left by making right lower than middle
            right = middle -= 1;
        }
    }

    // not found
    return -1;
}