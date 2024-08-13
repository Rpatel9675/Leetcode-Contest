#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n = nums1.size(); // Size of the first array
        int m = nums2.size(); // Size of the second array
        vector<vector<int>> ans; // Vector to store the merged result
        
        map<int, int> map; // Map to aggregate values by their keys
        
        // Add values from the first array to the map
        for (int i = 0; i < n; i++) {
            map[nums1[i][0]] += nums1[i][1];
        }
        
        // Add values from the second array to the map
        for (int i = 0; i < m; i++) {
            map[nums2[i][0]] += nums2[i][1];
        }
        
        // Convert the map to the result vector
        for (auto x : map) {
            ans.push_back({x.first, x.second});
        }
        
        return ans; // Return the merged array
    }
};
