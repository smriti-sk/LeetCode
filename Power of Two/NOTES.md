# 231. Power of Two

## Optimised Approach
### Bit manipulation :-
___Tip:__ Always remember that bit manipulation techniques are usually based on observations from multiple examples_

Let's take some good exampes :<br>
number->binary form<br>
3->0000 0011<br>
4->0000 0100<br>
5->0000 0101<br>
6->0000 0110<br>
7->0000 0111<br>
8->0000 1000<br>

The observation we can conclude is that the number which is a power of two has always compulsoryily 1 true bit.

Now consider :-<br>
bit representation of 7  -> 0111<br>
bit representation of 8  -> 1000<br>
bitwise AND of 7 and 8 -> 0000<br>

we are gonna use this property for for all numbers which are powers of two
```
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
};
```

Time Complexity : O(1)<br>
Space Complexity : O(1)


## Brute Force
We found all powers of 2 from 2^0 to 2^30 <br>
_2^0, 2^1, ..., 2^30_<br>
(Since Constraints: -2^31 <= n <= 2^31 - 1)

Then we compared if the number n is equal to any of those, if yes -> return true; if no -> return false.

```
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i=0; i<31; i++){
            if (n == pow(2,i)){
                return true;
            }
        }
        return false;
    }
};
```