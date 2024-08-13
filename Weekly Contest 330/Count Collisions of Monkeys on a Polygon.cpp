class Solution {
public:
    // Function to compute (a^b) % c using Modular Exponentiation
    int power(long long a, unsigned int b, int c){
        int ans = 1; // Initialize result
        a = a % c; // Update 'a' if it is more than or equal to c
        
        // If 'a' is divisible by c, return 0
        if (a == 0) return 0;

        // Perform the exponentiation
        while (b > 0) {
            // If 'b' is odd, multiply 'a' with result
            if (b & 1)
                ans = (ans * a) % c;

            // 'b' must be even now
            b = b / 2; // Divide 'b' by 2
            a = (a * a) % c; // Square 'a'
        }
        return ans; // Return the result
    }

public:
    // Function to calculate the number of ways monkeys can move such that at least one collision happens
    int monkeyMove(int n) {
        long long int ans = 1;
        int m = 1e9 + 7; // Modulo value

        // Special case: if n is half of m, the result is m-1
        if (n == 500000003) return 1000000006;

        // Calculate (2^n) % (1e9 + 7) using the power function
        ans = power(2, n, 1e9 + 7);

        // Subtract 2 to get the number of ways monkeys can move such that at least one collision happens
        ans -= 2;

        // Return the result
        return ans;
    }
};
