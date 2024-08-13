#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> ans; // Vector to store the result
        long long int x = 0; // Variable to store the current number formed by the string
        int n = word.size(); // Size of the input string
        
        // Process each character in the string
        for (int i = 0; i < n; i++) {
            x = x * 10 + (word[i] - '0'); // Form the number by adding the current digit
            x = x % m; // Take modulo m to keep the number manageable
            
            // Check if the number is divisible by m
            if (x == 0) 
                ans.push_back(1);
            else 
                ans.push_back(0);
        }

        return ans; // Return the result
    }
};
