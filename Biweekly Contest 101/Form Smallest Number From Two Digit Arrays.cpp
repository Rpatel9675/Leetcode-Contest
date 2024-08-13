#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m; // Map to keep track of the occurrences of numbers
        int a = nums1[0]; // Initialize a with the first element of nums1
        
        // Populate the map with elements from nums1 and find the minimum element in nums1
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i]]++;
            a = min(a, nums1[i]);
        }
        
        int b = nums2[0]; // Initialize b with the first element of nums2
        int ans = INT_MAX; // Variable to store the minimum possible number
        
        // Update the map with elements from nums2 and find the minimum element in nums2
        for (int i = 0; i < nums2.size(); i++) {
            m[nums2[i]]++;
            b = min(b, nums2[i]);
        }
        
        // Check if there's a common element between nums1 and nums2
        for (auto x : m) {
            if (x.second > 1) return x.first; // Return the common element if found
        }
        
        // If no common element is found, return the minimum possible number formed by concatenating elements
        return min(a * 10 + b, b * 10 + a);
    }
};
