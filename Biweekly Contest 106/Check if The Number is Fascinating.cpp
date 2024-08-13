#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to check if a number is fascinating
    bool isFascinating(int n) {
        // Concatenate the number, twice the number, and thrice the number into a single string
        std::string concatenated = std::to_string(n) + std::to_string(2 * n) + std::to_string(3 * n);
        
        // Vector to track digits from 0 to 9
        std::vector<bool> digits(10, false);

        // Iterate over each character in the concatenated string
        for (char ch : concatenated) {
            // If character is '0' or if the digit is already found, return false
            if (ch == '0' || digits[ch - '0']) {
                return false;
            }
            // Mark the digit as found
            digits[ch - '0'] = true;
        }

        // Check if all digits from 1 to 9 are present
        for (int i = 1; i <= 9; i++) {
            if (!digits[i]) {
                return false;
            }
        }

        // If all conditions are met, return true
        return true;
    }
};
