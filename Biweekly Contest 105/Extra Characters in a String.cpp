#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    map<string, int> m; // Map to store the dictionary words

    // Recursive function to calculate the minimum number of extra characters
    int c(int i, string &s, vector<int> &dp) {
        if (i >= s.size()) return 0; // Base case: if index is out of bounds, no extra characters

        int ans = INT_MAX; // Initialize answer to maximum integer value
        if (dp[i] != -1) return dp[i]; // Return precomputed result if available

        // Case where the current character is considered as an extra character
        ans = 1 + c(i + 1, s, dp);

        string k = "";
        for (int j = i; j < s.size(); j++) {
            k += s[j]; // Build the substring from the current index
            if (m[k]) { // If the substring is in the dictionary
                ans = min(ans, c(j + 1, s, dp)); // Find the minimum extra characters needed
            }
        }

        return dp[i] = ans; // Memoize the result and return
    }

    // Function to find the minimum number of extra characters needed
    int minExtraChar(string s, vector<string> &d) {
        for (auto i : d) m[i]++; // Populate the dictionary map with words
        vector<int> dp(s.size(), -1); // Initialize memoization vector
        return c(0, s, dp); // Start the recursive function
    }
};
