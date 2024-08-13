#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size(); // Number of elements in the input vector
        vector<long long> ans; // Vector to store the prefix scores
        long long m = 0; // Variable to keep track of the maximum value encountered so far

        // Calculate the prefix scores
        for (int i = 0; i < n; i++) {
            // Update the maximum value encountered so far
            if (m <= nums[i]) m = nums[i];
            // Calculate the prefix score for the current index
            ans.push_back(m + nums[i]);
        }

        vector<long long> v; // Vector to store the cumulative prefix scores
        long long temp = ans[0]; // Initialize temp with the first prefix score
        v.push_back(ans[0]); // Add the first prefix score to the result vector

        // Calculate the cumulative prefix scores
        for (int i = 1; i < n; i++) {
            v.push_back(temp + ans[i]); // Add the cumulative sum to the result vector
            temp += ans[i]; // Update the cumulative sum
        }

        return v; // Return the result vector containing cumulative prefix scores
    }
};
