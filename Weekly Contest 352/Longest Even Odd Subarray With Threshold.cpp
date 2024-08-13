#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to find the length of the longest alternating subarray where each element is ≤ threshold
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size(); // Size of the input array
        int count = 0; // Variable to count the length of the current alternating subarray
        int ans = 0; // Variable to store the length of the longest alternating subarray
        int flag = 0; // Flag to indicate if an alternating subarray is found

        // Check for a single element case
        if (n == 1) {
            if (nums[0] % 2 == 0 && nums[0] <= threshold) return 1;
            else return 0;
        }

        // Iterate through the array to find alternating subarrays
        for (int i = 0; i < n - 1; i++) {
            // Check if the current element is even and within the threshold
            if (nums[i] % 2 == 0) {
                if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                    if (1 > ans) ans = 1; // Update the result if a single element subarray is found
                }
                
                // Iterate to find the longest alternating subarray starting from the current element
                for (int j = i; j < n - 1; j++) {
                    if (nums[j] % 2 != nums[j + 1] % 2) { // Check for alternating elements
                        if (nums[j + 1] <= threshold && nums[j] <= threshold) { // Check if both elements are within the threshold
                            count++;
                            ans = max(ans, count); // Update the maximum length
                            flag = 1; // Set the flag indicating an alternating subarray is found
                        }
                        else break; // Break if the next element is not within the threshold
                    }
                    else break; // Break if the elements are not alternating
                }
            }
            count = 0; // Reset count for the next starting point
        }

        // Return the length of the longest alternating subarray or handle edge cases
        if (ans > 0 && flag == 1) return ans + 1;
        else if (ans == 1) return 1;
        else {
            if (nums[n - 1] % 2 == 0 && nums[n - 1] <= threshold) return 1;
            else if (nums[0] % 2 == 0 && nums[0] <= threshold) return 1;
            else return 0;
        }
    }
};
