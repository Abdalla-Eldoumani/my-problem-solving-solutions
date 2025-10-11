// Solved using memoization.
class Solution {
public:
    unordered_map<int, int> memo;

    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        
        memo[n] = fib(n - 1) + fib(n - 2);

        return memo[n];
    }
};

// Solved using tabulation.
class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        vector<int> dp(n + 1);
        
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};