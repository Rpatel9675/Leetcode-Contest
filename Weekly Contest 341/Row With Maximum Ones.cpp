#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size(); // Number of rows in the matrix
        int m = mat[0].size(); // Number of columns in the matrix
        vector<int> ans; // Vector to store the result
        int mx = 0; // Maximum number of 1's found in a row
        int k; // Index of the row with the maximum number of 1's

        // Iterate through each row of the matrix
        for (int i = 0; i < n; i++) {
            int count = 0; // Counter for the number of 1's in the current row
            
            // Count the number of 1's in the current row
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) count++;
            }
            
            // Update the maximum count and row index if a new maximum is found
            if (count > mx) {
                mx = count;
                k = i;
            }
        }
        
        // Add the row index and the maximum count to the result vector
        ans.push_back(k);
        ans.push_back(mx);
        
        return ans; // Return the result vector
    }
};
