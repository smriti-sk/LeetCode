# 56. Merge Intervals

[Leetcode Solution](https://leetcode.com/problems/merge-intervals/solutions/4228517/easy-c-solution/)

## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition is to sort the intervals with respect to their starting points.

## Approach
<!-- Describe your approach to solving the problem. -->
First sort the intervals by their starting points. 
Then, we take the first interval and compare its end with the next interval's start.

As long as they overlap, we update the end to be the max end of the overlapping intervals, once we find a non overlapping interval, we add the previous "extended" interval and start over.

## Complexity
- Time complexity: O(n log(n))
<!-- Add your time complexity here, e.g. $$O(n)$$ -->


- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->