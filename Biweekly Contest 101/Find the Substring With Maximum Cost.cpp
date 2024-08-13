#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to find the maximum subarray sum using Kadane's algorithm
    int maxsub(vector<int>& a, int size) {
        int temp_min = INT_MIN; // Variable to store the maximum subarray sum found so far
        int temp_max = 0; // Variable to store the current subarray sum
        
        // Iterate through the array to find the maximum subarray sum
        for (int i = 0; i < size; i++) {
            temp_max += a[i]; // Update the current subarray sum
            if (temp_min < temp_max) temp_min = temp_max; // Update the maximum subarray sum
            if (temp_max < 0) temp_max = 0; // Reset the current subarray sum if it's negative
        }
        
        return temp_min; // Return the maximum subarray sum
    }
    
    // Function to find the maximum cost substring based on the given character values
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        int n = chars.size(); // Number of characters with assigned values
        vector<int> temp; // Vector to store the numerical values of the characters in string s
        map<char, int> m; // Map to store the value of each character
        
        // Initialize the map with default values
        char c = 'a';
        m[c] = 1;
        for (int i = 1; i < 26; i++) {
            c++;
            m[c] = i + 1;
        }
        
        // Update the map with the provided character values
        for (int i = 0; i < n; i++) m[chars[i]] = vals[i];
        
        // Convert the string s to a vector of its corresponding values
        for (int i = 0; i < s.size(); i++) temp.push_back(m[s[i]]);
        
        // Find the maximum subarray sum
        int ans = maxsub(temp, temp.size());
        
        // Return the maximum cost substring, or 0 if it's negative
        if (ans < 0) return 0;
        else return ans;
    }
};
