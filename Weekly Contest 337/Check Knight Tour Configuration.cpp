#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        // Directions for knight's moves
        int vertix[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int column[] = {-1, -2, -2, -1, 1, 2, 2, 1};
        
        queue<pair<int, int>> ans; // Queue to perform BFS
        ans.push({0, 0}); // Start from the top-left corner
        int temp = 0; // Counter for the expected value
        int n = grid.size(); // Number of rows
        int m = grid[0].size(); // Number of columns
        
        while (!ans.empty()) {
            bool flag = false; // Flag to check if a valid move was found
            int x = ans.front().first; // Current row
            int y = ans.front().second; // Current column
            ans.pop(); // Remove the current position from the queue
            
            // Check all possible knight moves
            for (int i = 0; i < 8; i++) {
                int a = x + vertix[i]; // New row
                int b = y + column[i]; // New column
                
                // Check if the new position is within bounds and matches the expected value
                if (a >= 0 && a < n && b >= 0 && b < m && grid[a][b] == temp + 1) {
                    x = a;
                    y = b;
                    flag = true;
                    break; // Move to the next position
                }
            }
            
            // If a valid move was found, add the new position to the queue
            if (flag) ans.push({x, y});
            temp++; // Increment the expected value
        }
        
        // Check if all positions were visited
        return temp == n * m;
    }
};
