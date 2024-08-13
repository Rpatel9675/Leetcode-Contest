#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to calculate the maximum money left after buying the cheapest pair of chocolates
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end()); // Sort the prices in ascending order
        
        // Calculate the sum of the two cheapest chocolates
        int sum = prices[0] + prices[1];
        
        // If the sum is less than or equal to the available money, return the remaining money
        if (sum <= money) return money - sum;
        
        // Otherwise, return the available money as it's not possible to buy the pair
        else return money;
    }
};
