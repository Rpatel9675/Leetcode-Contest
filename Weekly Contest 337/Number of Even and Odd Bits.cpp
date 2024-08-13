#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int num = n;
        vector<int> ans; // Vector to store the result
        string s = ""; // String to store the binary representation
        
        // Convert the number to binary representation
        while (num) {
            if (num & 1) 
                s += '1'; // Append '1' if the least significant bit is 1
            else 
                s += '0'; // Append '0' if the least significant bit is 0
            num >>= 1; // Right shift to process the next bit
        }
        
        int e = 0, o = 0; // Counters for even and odd indexed '1's in the binary representation
        
        // Count the number of '1's at even and odd indices
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 != 0 && s[i] == '1') 
                o++;
            if (i % 2 == 0 && s[i] == '1') 
                e++;
        }
        
        ans.push_back(e); // Add the count of '1's at even indices
        ans.push_back(o); // Add the count of '1's at odd indices
        
        return ans; // Return the result
    }
};
