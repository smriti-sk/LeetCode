# [859. Buddy Strings](https://leetcode.com/problems/buddy-strings/)
_Easy_

Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
 

__Example 1:__

Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

__Example 2:__

Input: s = "ab", goal = "ab"<br>
Output: false<br>
Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.

__Example 3:__

Input: s = "aa", goal = "aa"<br>
Output: true<br>
Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.
 

__Constraints:__

1 <= s.length, goal.length <= 2 * 104 <br>
s and goal consist of lowercase letters.