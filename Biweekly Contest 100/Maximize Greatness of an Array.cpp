#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array to facilitate comparison
        
        int s = 0; // Start pointer
        int e = 1; // End pointer
        int n = nums.size(); // Size of the array
        int ans = 0; // Counter for the number of valid pairs
        
        // Iterate through the array to find valid pairs
        while (e < n) {
            if (nums[s] < nums[e]) { // If the current pair is valid
                s++; // Move start pointer
                e++; // Move end pointer
                ans++; // Increment the count of valid pairs
            } else {
                e++; // Move end pointer to find a valid pair
            }
        }
        
        return ans; // Return the total count of valid pairs
    }
};
