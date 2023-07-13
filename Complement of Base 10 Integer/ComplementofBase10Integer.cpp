class Solution {
public:
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
};