#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
    // Helper function to recursively compute the desired result
    int ans(vector<int>& v, int curr, int k) {
        for (int i = 0; i < v.size(); i++) {
            if (curr + v[i] == k) {
                curr++;
                ans(v, curr, k);
            }
        }
        return curr;
    }
public:
    // Function to compute the minimum sum of the first n integers such that no two numbers sum up to k
    int minimumSum(int n, int k) {
        vector<int> v; // Vector to store the numbers
        map<int, int> m; // Map to track the numbers and their occurrences
        int curr = 1; // Current number to be added
        
        // Initialize the vector and map
        v.push_back(curr);
        m[curr]++;
        
        // Populate the vector with numbers ensuring no two numbers sum up to k
        while (v.size() < n) {
            curr++;
            while (m.find(k - curr) != m.end()) curr++; // Increment curr if the sum with any number in m equals k
            v.push_back(curr);
            m[curr]++;
        }
        
        // Compute the sum of the numbers in the vector
        int sum = 0;
        for (int i = 0; i < n; i++) sum += v[i];
        
        return sum; // Return the computed sum
    }
};
