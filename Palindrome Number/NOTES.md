# 9. Palindrome Number

## Optimised Approach
Reverse the digits of the number, and Comparing the reversed no. is equal with the original no.

If they are same, then no. is palindrome

```
    class Solution {
        public:
            bool isPalindrome(int x) {
                long long rev =0;
                long long temp = x;

                while (temp>0){
                    int digit = temp%10;

                    rev = rev*10 + digit;
                    temp /= 10;
                }

                return (rev == x);
            }
};
```

# String Approach

Convert the no. to string, compare the 1st element to the last element of string, then 2nd to second last, so on... are same.

```
    class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0){
                return false;
            }
            // if (x>= 0 && x<10){
            //     return true;
            // }
            string s = to_string(x);
            int n = s.length();
            for (int i=0; i<=(n-1)/2 ; i++){
                if (s[i] != s[n-1-i]){
                    return false;
                }
            }
            return true;
        }
};
```