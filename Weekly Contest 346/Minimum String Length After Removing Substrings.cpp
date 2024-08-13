#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int minLength(string s) {
        stack<char> ans; // Stack to keep track of characters and their cancellations
        
        int i = 0;
        while (i < s.size()) {
            if (ans.empty()) {
                ans.push(s[i]); // Push the character if stack is empty
            } else {
                // Check for cancellation pairs
                if (s[i] == 'B' && ans.top() == 'A') {
                    ans.pop(); // Cancel 'A' with 'B'
                } else if (s[i] == 'D' && ans.top() == 'C') {
                    ans.pop(); // Cancel 'C' with 'D'
                } else {
                    ans.push(s[i]); // Push the character if no cancellation
                }
            }
            i++;
        }
        
        return ans.size(); // Return the size of the stack which represents the remaining length
    }
};
