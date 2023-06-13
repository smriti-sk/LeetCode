# [1365. How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

__Easy__

Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

 

__Example 1:__

Input: nums = [8,1,2,2,3]<br>
Output: [4,0,1,1,3]<br>
Explanation: <br>
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). <br>
For nums[1]=1 does not exist any smaller number than it.<br>
For nums[2]=2 there exist one smaller number than it (1). <br>
For nums[3]=2 there exist one smaller number than it (1). <br>
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).<br>

__Example 2:__

Input: nums = [6,5,4,8]<br>
Output: [2,1,0,3]

__Example 3:__

Input: nums = [7,7,7,7]<br>
Output: [0,0,0,0]
 

__Constraints:__

2 <= nums.length <= 500<br>
0 <= nums[i] <= 100
