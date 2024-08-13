#include <bits/stdc++.h> // This header file includes all standard C++ libraries
using namespace std;

// LinkedIn: https://www.linkedin.com/in/rocky-patel-36070020a/

class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int x = 0; // Score for player1
        int y = 0; // Score for player2

        // Calculate the score for player1
        for (int i = 0; i < player1.size(); i++) {
            // Check if the previous or the second last roll was a strike
            if ((i >= 1 && player1[i - 1] == 10) || (i >= 2 && (player1[i - 1] == 10 || player1[i - 2] == 10))) 
                x += 2 * player1[i]; // Double the score if a strike was followed by this roll
            else 
                x += player1[i]; // Regular score addition
        }

        // Calculate the score for player2
        for (int i = 0; i < player2.size(); i++) {
            // Check if the previous or the second last roll was a strike
            if ((i >= 1 && player2[i - 1] == 10) || (i >= 2 && (player2[i - 1] == 10 || player2[i - 2] == 10))) 
                y += 2 * player2[i]; // Double the score if a strike was followed by this roll
            else 
                y += player2[i]; // Regular score addition
        }

        // Compare scores and determine the winner
        if (x > y) return 1; // Player1 wins
        else if (x < y) return 2; // Player2 wins
        else return 0; // Tie
    }
};
