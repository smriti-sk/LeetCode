# 15. 3Sum

# Optimized Solution -> Beats 76.26%
[Leetcode Solution](https://leetcode.com/problems/3sum/solutions/4229515/best-c-solution-beats-76-26/)

## Intuition
Use 2 pointers appraoch to maintain the 'j' and 'k', while we interate the array using 'i' iterator.

## Approach
1. Sort the input array, _(so that all the duplicates of a number are together. eg, [-1, -1, 1, 2, 2, ...])_
2. Initialize an output vector to store the final result
3. Iterate through the array with a variable i, starting from index 0.
To skip all the duplicates of nums[j] => if (i > 0 && nums[i] == nums[i - 1]) continue;
4. Initialize two pointers, j and k, with j starting at i+1 and k starting at the end of the array.
5. In the while loop, check if the sum of nums[i], nums[j], and nums[k] is equal to 0. If it is, insert the triplet into the output and increment j and decrement k to move the pointers.
6. If the sum is less than 0, increment j. If the sum is greater than 0, decrement k.
7. To skip all the duplicates of nums[j] => while (j < k && nums[j] == nums[j - 1]) ++j;
To skip all the duplicates of nums[k] => while (j < k && nums[k] == nums[k + 1]) --k;
8. End While loop
9. Return the output vector



## Complexity
- Time complexity: O(n^2)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
