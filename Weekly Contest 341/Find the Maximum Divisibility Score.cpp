#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int mn = -1; // Variable to keep track of the maximum score found
        int mx = -1; // Variable to keep track of the corresponding divisor
        int n = nums.size(); // Number of elements in nums
        int m = divisors.size(); // Number of elements in divisors

        // Iterate through each divisor
        for (auto x : divisors) {
            int score = 0; // Score for the current divisor
            
            // Calculate the score for the current divisor
            for (auto y : nums) {
                if (y % x == 0) score += 1; // Increment score if y is divisible by x
            }
            
            // Update the maximum score and corresponding divisor
            if (score > mn) {
                mn = score;
                mx = x;
            }
            else if (score == mn) {
                mx = min(mx, x); // Choose the smaller divisor if scores are equal
            }
        }

        return mx; // Return the divisor with the highest score
    }
};
