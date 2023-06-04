# 509. Fibonacci Number

## Approach
As we know that many of the states are repeated in fibonacci series while using recursion, so we have to use DP for storing the states and using these precalculated states, so to use these states if encountered again.

## Method 1: Most Optimized
```
    int fib(int n) {
        if (n ==0 || n==1){
            return n;
        }

        int prev1 = 0;
        int prev2 = 1;
        int ans =0;
        for (int i=2; i<=n; i++){
            ans = prev1 + prev2;
            prev1 = prev2;
            prev2 = ans;
        }

        return ans;
    }
```

__Complexity__
- Time complexity:
O(n), as one state is exexuted only once.

- Space complexity:
__O(1)__, as we are using 3 variables a,b,c


## Method 2: Memoization
Memoization is an optimization technique that makes applications more efficient and hence faster. It does this by storing computation results in cache, and retrieving that same information from the cache the next time it's needed instead of computing it again.

In simpler words, it consists of storing in cache the output of a function, and making the function check if each required computation is in the cache before computing it.

### _With memoization, there's no need to recalculate the same values once and again – we just store each computation and return the same value when required again._

Implementing memoization, our function would look like this:
```
int fib(int n, vector<int> dp){
    if (n==0 || n==1){
        return n;
    }
    if (dp[n]!= -1){
        return dp[n];
    }

    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

int main(){
    int n = 7;
    vector<int> dp(100, -1);
    cout<< fib(n, dp);
}
```

__Complexity__
- Time complexity:
O(n), as one state is exexuted only once.

- Space complexity:
O(n), as we are using array for storing states