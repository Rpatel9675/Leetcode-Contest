#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0]; // If there's only one element, return it directly

        vector<int> negative;
        vector<int> positive;

        // Separate the numbers into positive and negative vectors
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) negative.push_back(nums[i]);
            else if (nums[i] > 0) positive.push_back(nums[i]);
        }

        long long ans1 = 1; // Product of negative numbers
        sort(negative.begin(), negative.end()); // Sort negatives in ascending order
        sort(positive.begin(), positive.end()); // Sort positives in ascending order

        // Compute the product of negative numbers
        int neg_size = negative.size();
        if (neg_size % 2 == 0) {
            // If there is an even number of negative numbers, include all
            for (int i = 0; i < neg_size; i++) {
                ans1 *= negative[i];
            }
        } else {
            // If there is an odd number of negative numbers, exclude the smallest one
            for (int i = 0; i < neg_size - 1; i++) {
                ans1 *= negative[i];
            }
        }

        long long ans2 = 1; // Product of positive numbers

        // Compute the product of positive numbers
        for (int i = 0; i < positive.size(); i++) {
            ans2 *= positive[i];
        }

        // Return the maximum product possible
        if (ans1 > 0 && ans2 > 0)
            return max(ans1 * ans2, ans2); // If both are positive, return the maximum product
        else if (ans1 > 0)
            return ans1; // Return product of negatives if positives are absent
        else if (ans2 > 0)
            return ans2; // Return product of positives if negatives are absent
        else
            return 0; // If all numbers are zero or negative, return 0
    }
};
