#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0; // Counter for seniors
        
        // Iterate through each entry in the details vector
        for (int i = 0; i < details.size(); i++) {
            // Extract the age from the string (positions 11 and 12)
            int x = (details[i][11] - '0') * 10; // Tens place
            x += (details[i][12] - '0'); // Units place
            
            // Check if the age is greater than 60
            if (x > 60) 
                count++;
        }
        
        return count; // Return the total number of seniors
    }
};
