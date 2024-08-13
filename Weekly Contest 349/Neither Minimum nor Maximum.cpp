#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to find a non-minimum and non-maximum value in the array
    int findNonMinOrMax(vector<int>& nums) {
        // If the array has fewer than 3 elements, it's impossible to find a non-minimum or non-maximum value
        if (nums.size() < 3) return -1;

        int min_val = INT_MAX; // Initialize minimum value to maximum integer value
        int max_val = INT_MIN; // Initialize maximum value to minimum integer value

        // Find the minimum and maximum values in the array
        for (int num : nums) {
            min_val = min(min_val, num); // Update minimum value
            max_val = max(max_val, num); // Update maximum value
        }

        // Find and return a value that is neither the minimum nor the maximum
        for (int num : nums) {
            if (num != min_val && num != max_val) return num;
        }

        // Return -1 if no such value is found
        return -1;
    }
};
