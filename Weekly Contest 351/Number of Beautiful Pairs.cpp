#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to count the number of beautiful pairs in the array
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size(); // Size of the input array
        int beautiful_pairs = 0; // Counter for beautiful pairs

        // Iterate through each pair (i, j) where i < j
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = nums[i];
                
                // Extract the first digit of nums[i]
                while (temp >= 10) {
                    temp = temp / 10;
                }

                // Check if the GCD of the first digit of nums[i] and the last digit of nums[j] is 1
                if (__gcd(temp, nums[j] % 10) == 1) {
                    beautiful_pairs++; // Increment the count of beautiful pairs
                }
            }
        }

        return beautiful_pairs; // Return the total count of beautiful pairs
    }
};
