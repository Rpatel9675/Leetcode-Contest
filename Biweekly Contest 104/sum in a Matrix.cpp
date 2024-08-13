#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0; // Variable to store the sum of maximum elements

        // Continue until all rows are processed
        while (!nums.empty()) {
            int mx = 0; // Variable to store the maximum element in the current iteration

            // Iterate through each row
            for (int i = 0; i < nums.size(); i++) {
                // Find the maximum element in the current row
                int temp = *max_element(nums[i].begin(), nums[i].end());
                mx = max(mx, temp); // Update the maximum element across all rows
                
                // Remove the maximum element from the current row
                nums[i].erase(find(nums[i].begin(), nums[i].end(), temp));
                
                // If the current row becomes empty, remove it from the matrix
                if (nums[i].empty()) {
                    nums.erase(nums.begin() + i);
                    i--; // Adjust the index to account for the removed row
                }
            }

            ans += mx; // Add the maximum element to the result
        }
        
        return ans; // Return the total sum of maximum elements
    }
};
