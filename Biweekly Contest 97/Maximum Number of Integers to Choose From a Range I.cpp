#include <bits/stdc++.h>     // For using std::map
using namespace std;
class Solution {
public:
    // Function to calculate the maximum count of numbers that can be taken such that their sum doesn't exceed maxSum
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int, int> m; // Map to store banned numbers
        int sum = 0, count = 0; // Initialize sum and count

        // Mark all banned numbers in the map
        for (int i = 0; i < banned.size(); i++) {
            m[banned[i]]++;
        }

        // Iterate over numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            // If the number is not banned and the current sum + number doesn't exceed maxSum
            if (m[i] == 0 && sum + i <= maxSum) {
                count++; // Increment the count
                sum += i; // Add the number to the sum
            }
        }

        return count; // Return the final count of numbers that can be taken
    }
};
