#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n = grid.size(); // Number of rows in the grid
        int m = grid[0].size(); // Number of columns in the grid
        vector<int> v; // Vector to store the maximum width of each column

        // Iterate through each column
        for (int i = 0; i < m; i++) {
            int temp = INT_MIN; // Variable to store the maximum width for the current column
            
            // Iterate through each row in the current column
            for (int j = 0; j < n; j++) {
                // Convert the current element to a string and calculate its length
                string x = to_string(grid[j][i]);
                int ans = x.size();
                
                // Update the maximum width for the current column
                temp = max(temp, ans);
            }
            
            // Add the maximum width of the current column to the result vector
            v.push_back(temp);
        }
        
        return v; // Return the result vector containing the maximum widths of all columns
    }
};
