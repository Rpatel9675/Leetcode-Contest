#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> left;  // Vector to store the cumulative sum from the left
        vector<int> right; // Vector to store the cumulative sum from the right
        int sum = 0;
        int n = nums.size(); // Size of the input array
        
        // Compute the cumulative sums from the left
        for (int i = 0; i < n; i++) {
            left.push_back(sum);
            sum += nums[i];
        }
        
        sum = 0; // Reset sum for computing right cumulative sums
        
        // Compute the cumulative sums from the right
        for (int i = 0; i < n; i++) {
            right.push_back(sum);
            sum += nums[n - 1 - i];
        }
        
        vector<int> ans; // Vector to store the result
        
        // Compute the absolute difference between the left and right cumulative sums
        for (int i = 0; i < n; i++) {
            int x = abs(left[i] - right[n - 1 - i]);
            ans.push_back(x);
        }
        
        return ans; // Return the final result
    }
};
