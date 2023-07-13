# Complement of Base 10 Integer

__Step 1:__ Find compliment-> ~n<br>
eg. n = 5 (101)<br>
~n = 11111..11 __010__<br>

- we need to discard the 1(s) before the 3rd position, only keep __010__

__Step 2:__ Find mask<br>
mask is such that when we appy AND (&) operation, we get __101__ and discard all preceeding 1(s).<br>
mask = 0000...00 __111__

For that:
1. Initialize mask = 0
2. Right shift mask, then OR ( | ) with 1 (0000..00 __1__)<br>
mask = (00...00 __0__) | 1 <br>
mask =  00...00 __1__ <br>
Also, left shift n to keep track of how many time we need to right shift mask
3. Continue this till (n != 0)

we will get our mask 
```
int bitwiseComplement(int n) {
        int m = n;
        int mask =0;

        //edge case
        if (n==0){
            return 1; //compliment of 0 is 1
        }
        while (n!=0){
            mask =( mask<<1)| 1;
            n = n>>1;
        }

        return ((~m) & mask);
    }
```