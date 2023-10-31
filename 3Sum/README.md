# [15. 3Sum](https://leetcode.com/problems/3sum/)
__Medium__

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

__Example 1:__

Input: nums = [-1,0,1,2,-1,-4]<br>
Output: [[-1,-1,2],[-1,0,1]]

Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0. <br>
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0. <br>
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.<br>
The distinct triplets are [-1,0,1] and [-1,-1,2].<br>

_Notice that the order of the output and the order of the triplets does not matter._


__Example 2:__

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

__Example 3:__

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

__Constraints:__

3 <= nums.length <= 3000
-105 <= nums[i] <= 105