#include <iostream>
#include <string>

class Solution {
public:
    std::string smallestString(std::string s) {
        bool flag = false;

        // If the string has only one character
        if (s.length() == 1) {
            if (s[0] == 'a') {
                return "z"; // Change 'a' to 'z' if it's the only character
            } else {
                // Decrement the character and return the result
                s[0] = (char)(((int)(s[0] - 'a') - 1) + 'a');
                return s;
            }
        }

        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] != 'a') {
                flag = true;
                // Decrement the character and continue processing
                s[i] = (char)(((int)(s[i] - 'a') - 1) + 'a');
            } else if (flag) {
                break; // Stop processing once an 'a' is encountered after a decrement
            }
        }

        // If no character was decremented, change the last character to 'z'
        if (!flag) {
            s[s.length() - 1] = 'z';
        }

        return s;
    }
};


