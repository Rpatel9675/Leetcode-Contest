#include"bits/stdc++.h"
using namespace std;
class Solution {
public:
    // Function to separate the digits of the numbers in the input vector
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans; // This will store the final result
        
        // Iterate over each number in the input vector
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i]; // Get the current number
            vector<int> temp; // Temporary vector to store the digits of the current number
            
            // Extract digits of the current number
            while (x) {
                int p = x % 10; // Get the last digit
                temp.push_back(p); // Add it to the temp vector
                x = x / 10; // Remove the last digit from the number
            }
            
            // Reverse the order of digits to maintain the original number order
            for (int j = temp.size() - 1; j >= 0; j--) {
                ans.push_back(temp[j]); // Add the digits to the final result
            }
        }
        
        return ans; // Return the final result vector containing all separated digits
    }
};
