#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to find the minimum number of moves required to sort a semi-ordered permutation
    int semiOrderedPermutation(vector<int>& nums) {
        int a = 0; // Position of the number 1
        int b = 0; // Position of the number n
        int c;     // Intermediate calculation
        int n = nums.size(); // Size of the input vector

        // Iterate through the vector to find positions of 1 and n
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) a = i; // Update position of 1
            if (nums[i] == n) b = i; // Update position of n
        }

        c = n - b; // Calculate distance from position of n to the end of the vector
        c--; // Adjust distance because the last position is already counted

        int ans = a + c; // Calculate the total moves needed

        // If 1 is found after n, one extra move is required
        if (a > b) ans--;

        return ans; // Return the result
    }
};
