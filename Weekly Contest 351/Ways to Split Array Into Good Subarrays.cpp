#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to count the number of good subarray splits
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n = nums.size(); // Size of the input array
        vector<int> v; // Vector to store the positions of '1's in the array
        long long m = 1e9 + 7; // Modulo value for large numbers

        // Collect the positions of all '1's in the array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) v.push_back(i + 1);
        }

        // If there are no '1's, no valid subarrays can be split
        if (v.size() == 0) return 0;

        // If there is only one '1', there's only one valid subarray split
        if (v.size() == 1) return 1;

        // Calculate the number of good subarray splits
        long long ans = 1;
        for (int i = 0; i < v.size() - 1; i++) {
            ans *= (v[i + 1] - v[i]); // Compute the product of differences between consecutive '1's
            ans = ans % m; // Apply modulo operation
        }

        return ans; // Return the total number of good subarray splits
    }
};
