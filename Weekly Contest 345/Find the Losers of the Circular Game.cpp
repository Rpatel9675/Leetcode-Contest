#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/
class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> visited(n, false); // Vector to track visits
        vector<int> ans;
        int i = 0, p = 1;
        
        while (!visited[i]) {
            visited[i] = true;
            i = (i + p * k) % n;
            p++;
        }
        
        // Collect all positions that were not visited
        for (int i = 0; i < n; i++) {
            if (!visited[i]) ans.push_back(i + 1); // Convert to 1-indexed
        }
        
        return ans;
    }
};
