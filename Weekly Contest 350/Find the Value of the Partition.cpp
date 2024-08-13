#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to find the minimum value of partition difference in the sorted array
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array in non-decreasing order
        int mn = INT_MAX; // Initialize minimum difference to the maximum integer value

        // Loop through the sorted array to find the minimum difference between consecutive elements
        for (int i = 0; i < nums.size() - 1; i++) {
            int temp = nums[i + 1] - nums[i]; // Difference between consecutive elements
            mn = min(mn, temp); // Update the minimum difference if a smaller value is found
        }

        return mn; // Return the minimum difference
    }
};
