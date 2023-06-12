# 771. Jewels and Stones

## Intuition
Using Hashmaps to reduce the search time for a particular stone in jewels to O(1).

## Approach
The j and s unordered maps (hashmaps) are created to store the characters of the jewels and stones strings, respectively, along with their corresponding indices.

Initialize the count =0;

Find whether the stone at index i is also present in the j(jewels), if the stone is also in jewels then increment the count.

## Complexity
- Time complexity: O(m + n) 
- Space complexity: O(max(p, q)) <br>
(p: number of distinct characters in jewels &
q: number of distinct characters in stones)