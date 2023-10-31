# [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)
__Medium__

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

__Example 1:__

Input: intervals = [[1,3],[2,6],[8,10],[15,18]] <br>
Output: [[1,6],[8,10],[15,18]] <br>
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

__Example 2:__

Input: intervals = [[1,4],[4,5]]<br>
Output: [[1,5]]<br>
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

__Constraints:__

1 <= intervals.length <= 104 <br>
intervals[i].length == 2<br>
0 <= starti <= endi <= 104