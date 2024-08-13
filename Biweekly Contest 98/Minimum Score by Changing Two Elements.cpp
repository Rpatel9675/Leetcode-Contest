#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array in ascending order
        
        int n = nums.size(); // Get the size of the array
        
        // Calculate the minimum difference between various possible subarrays
        int a = min(nums[n-3] - nums[0], nums[n-2] - nums[1]); // Difference considering the smallest and largest elements
        int b = min(a, nums[n-1] - nums[2]); // Further minimize by considering other elements
        
        // Return the smallest difference among all calculated differences
        int mn = min(b, nums[n-1] - nums[0]); // Final minimum difference
        return mn;
    }
};
