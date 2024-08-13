#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int addMinimum(string word) {
        int count = 0; // Variable to store the total number of characters to add
        int n = word.size(); // Size of the input string

        // Handle the first character
        if (word[0] == 'b') count++;
        else if (word[0] == 'c') count += 2;

        // Handle the last character
        if (word[n - 1] == 'a') count += 2;
        else if (word[n - 1] == 'b') count += 1;

        // Iterate through the string to handle the pairs of characters
        for (int i = 0; i < n - 1; i++) {
            if (word[i] == 'a' && word[i + 1] == 'a') count += 2;
            else if (word[i] == 'a' && word[i + 1] == 'c') count += 1;
            else if (word[i] == 'b' && word[i + 1] == 'a') count += 1;
            else if (word[i] == 'b' && word[i + 1] == 'b') count += 2;
            else if (word[i] == 'c' && word[i + 1] == 'b') count += 1;
            else if (word[i] == 'c' && word[i + 1] == 'c') count += 2;
        }

        return count; // Return the total number of characters to add
    }
};
