#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num); // Convert the number to a string
        char x = s[0]; // Initialize x with the first character of the string
        
        // Find the first character that is not '9'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '9') {
                x = s[i];
                break;
            }
        }
        
        string p = s; // Copy the original string
        char temp = s[0]; // Initialize temp with the first character of the string
        
        // Replace all occurrences of temp in p with '0'
        for (int i = 0; i < s.size(); i++) {
            if (p[i] == temp) 
                p[i] = '0';
        }
        
        // Replace all occurrences of x in s with '9'
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == x) 
                s[i] = '9';
        }
        
        int mx = stoi(s); // Convert the modified string back to an integer
        int mn = stoi(p); // Convert the modified string back to an integer
        return mx - mn; // Return the difference between the maximum and minimum values
    }
};
