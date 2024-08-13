#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int distMoney(int money, int children) {
        // If there are more children than money, it's impossible to distribute
        if (children > money) return -1;
        
        // Special case handling
        if (money < 8) return 0; // Not enough money to distribute

        // Calculate the number of 8-dollar bills and the remainder
        int x = money / 8;
        int y = money % 8;
        
        // Check different distribution cases
        if (x == children && y == 0) return children; // Exact match
        if (x >= children) return children - 1; // More 8-dollar bills than children
        
        // Special case where remainder is 4 and only one child can be accommodated
        if (y == 4 && children - x == 1) return children - 2;
        
        // If the remainder is enough for the remaining children
        if (y >= children - x) return x;
        
        int ans = children - x; // Start with the minimum needed children
        while (y < ans) { // Adjust if the remainder is insufficient
            ans++;
            y += 8;
            x--;
        }
        return x; // Return the number of 8-dollar bills
    }
};
