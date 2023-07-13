# Reverse Integer

There will be two cases:

1. Normal case:
   we just have to return the number with reversed digits

2. The case where the reverse no. is out of the range of signed int ([-2^31, 2^31 - 1]).
   **NOTE: we cannot store 64-bit integers (signed or unsigned).**

### Identifying the case<br>
  - we need to know-> (rev > INT_MAX)? <br>
    (but rev must be less than INT_MAX, so that we are able to store it.)
  - we can know-> (rev > INT_MAX / 10)?<br> to decide return 0 or to continue rev = rev \* 10 + x % 10;

    _Similarly for (rev < INT_MIN)?_

```
int reverse(int x) {
        int rev =0;
        while(x!=0){
            if (rev > (INT_MAX / 10) || rev < (INT_MIN /10)){
                return 0;
            }
            rev = rev*10 + x%10;
            x = x/10;
        }

        return rev;
    }
```
