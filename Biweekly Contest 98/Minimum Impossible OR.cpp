#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        map<int, int> m; // Map to store the count of each number in the array
        
        // Populate the map with the counts of each number
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        
        int ans = 1; // Start with the smallest impossible OR value
        
        // Loop to find the smallest number not present in the map
        while (true) {
            if (m[ans] == 0) 
                return ans; // If the number is not present in the map, return it
            ans = ans * 2; // Move to the next power of 2
        }
        
        return ans; // This line is never reached due to the infinite loop
    }
};
