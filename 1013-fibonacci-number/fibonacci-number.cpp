class Solution {
public:
    int fib(int n, vector<int>& memo) {
        if (memo[n] != -1) return memo[n];

        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
        return memo[n];
    }

    int fib(int n) {
        if (n < 2) return n;

        vector<int> memo(n + 1, -1);
        memo[0] = 0;
        memo[1] = 1;

        return fib(n, memo);
    }
};

// easy but takes time

// class Solution {
// public:
//     int fib(int n) {
//         if (n == 0) return 0;
//         if (n == 1) return 1;

//         return fib(n - 1) + fib(n - 2);
//     }
// };
