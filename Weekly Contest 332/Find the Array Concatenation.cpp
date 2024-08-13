#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        string s = "";
        int n = nums.size();
        
        // Check if the array size is odd
        if (n % 2 == 0) 
            ans = 0; // If even, no middle element to consider
        else 
            ans = nums[n / 2]; // If odd, initialize ans with the middle element
        
        // Iterate over the first half of the array
        for (int i = 0; i < nums.size() / 2; i++) {
            string s1 = to_string(nums[i]); // Convert the ith element to string
            string s2 = to_string(nums[nums.size() - 1 - i]); // Convert the symmetric element to string
            string s = s1 + s2; // Concatenate the two strings
            ans += stoi(s); // Convert the concatenated string back to integer and add to ans
        }
        
        return ans; // Return the final result
    }
};
