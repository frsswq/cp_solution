#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // steps:
        // 1. find the right row
        //  - check for the left and right col (start from middle row)
        // 2. check the cols of the right row
        //  - binary search

        int row_size = matrix.size();
        int col_size = matrix[0].size();

        int row_left = 0;
        int row_right = row_size - 1;

        while (row_left <= row_right) {
            int mid_row = row_left + (row_right - row_left) / 2;

            if (target > matrix[mid_row][col_size - 1]) {
                row_left = mid_row + 1;                
            } else if (target < matrix[mid_row][0]) {
                row_right = mid_row - 1;
            } else {
                break;
            }
        }

        if (!(row_left <= row_right)) {
            return false;
        }

        int target_col = (row_left + row_right) / 2;
        int target_left = 0;
        int target_right = col_size - 1;

        while (target_left <= target_right) {
            int target_mid = target_left + (target_right - target_left) / 2;

            if (target > matrix[target_col][target_mid]) {
                target_left = target_mid + 1;
            } else if (target < matrix[target_col][target_mid]) {
                target_right = target_mid - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};