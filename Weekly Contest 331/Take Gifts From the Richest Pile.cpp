#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

class Solution {
public:
    // Function to simulate the process of picking gifts and reducing their values
    long long pickGifts(vector<int>& gifts, int k) {
        long long n = gifts.size(); // Get the size of the gifts vector
        priority_queue<long long> ans; // Max-heap to store the gift values

        // Push all gift values into the max-heap
        for (auto i : gifts) {
            ans.push(i);
        }

        long long sum = 0; // Initialize the sum of remaining gifts

        // Perform k iterations of reducing the top gift value
        while (k--) {
            ans.push(sqrt(ans.top())); // Replace the top gift value with its square root
            ans.pop(); // Remove the original top value
        }

        // Sum up all remaining values in the heap
        while (!ans.empty()) {
            sum += ans.top(); // Add the top value to the sum
            ans.pop(); // Remove the top value from the heap
        }

        return sum; // Return the final sum of remaining gifts
    }
};

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/
