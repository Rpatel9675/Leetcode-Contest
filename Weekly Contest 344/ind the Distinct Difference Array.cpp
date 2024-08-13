#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size(); // Size of the input array
        set<int> s; // Set to store unique elements on the left side
        vector<int> ans; // Vector to store the result

        // Iterate through each index of the array
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]); // Insert the current element into the set

            map<int, int> m; // Map to store elements on the right side and their counts
            for (int x = i + 1; x < n; x++) {
                m[nums[x]]++; // Count elements on the right side
            }

            // Calculate the difference between the size of the set and the size of the map
            ans.push_back(s.size() - m.size());
        }

        return ans; // Return the result
    }
};
