#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    // Function to calculate the distance traveled with the given tanks
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = mainTank * 10; // Initial distance that can be traveled with the main tank alone
        int count = 0; // Counter for additional trips

        // Loop to simulate using the additional tank
        while (mainTank && additionalTank) {
            if (mainTank >= 5) {
                mainTank -= 5; // Use 5 units of the main tank
                additionalTank--; // Use 1 unit from the additional tank
                mainTank++; // Refill 1 unit into the main tank
                count++; // Increment the count of additional trips
            } else {
                break; // Exit the loop if main tank has less than 5 units
            }
        }

        // Return the total distance traveled, including the extra distance from additional trips
        return ans + count * 10;
    }
};
