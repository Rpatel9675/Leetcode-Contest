#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to check if the given string s is an acronym of the words in the vector
    bool isAcronym(vector<string>& words, string s) {
        string x = ""; // Variable to store the acronym formed from the words
        
        // Iterate through the vector of words
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i]; // Get the current word
            x += temp[0]; // Append the first character of the current word to the acronym
        }
        
        // Compare the formed acronym with the given string s
        if (x == s) return true; // Return true if they match
        return false; // Return false if they do not match
    }
};
