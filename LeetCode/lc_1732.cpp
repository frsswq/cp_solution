#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // editorial approach (more optimized)
        int current_altitude = 0;
        int max_altitude = current_altitude;

        for (int& num : gain) {
            current_altitude += num;

            max_altitude = max(max_altitude, current_altitude);
        }

        return max_altitude;
        
        // naive approach
        // int len = gain.size();
        // vector<int> a(len + 1);
        // a[0] = 0;

        // for (int i = 1; i < a.size(); i++) {
        //     a[i] = gain[i - 1] + a[i - 1];
        // }

        // int max_num = *max_element(a.begin(), a.end());

        // return max_num;

    }
};