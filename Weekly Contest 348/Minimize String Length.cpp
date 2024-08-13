#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to calculate the minimized length of a string by removing duplicate characters
    int minimizedStringLength(string s) {
        int n = s.size(); // Get the size of the string
        set<char> ans; // Create a set to store unique characters

        // Iterate over each character in the string
        for (int i = 0; i < n; i++) {
            ans.insert(s[i]); // Insert the character into the set (duplicates will be ignored)
        }

        // The size of the set is the length of the string with duplicates removed
        return ans.size();
    }
};
