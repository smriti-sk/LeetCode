# 1351. Count Negative Numbers in a Sorted Matrix

## Intuition
The intuition behind the problem is that by starting from the bottom-left corner of the grid, we can efficiently traverse through the grid and count the negative numbers. Since the grid is sorted, we know that once we encounter a negative number, all the remaining elements in that row will also be negative. Therefore, we can increment the count by the number of remaining columns in that row. By moving upward in the grid and skipping unnecessary elements, we can avoid counting the positive numbers and optimize the counting process.

## Approach
We start from the bottom-left corner of the matrix and move to the top-right corner of the matrix.

While 'row' is greater than or equal to 0 and 'col' is less than the total number of columns:
Check if the element at grid[row][col] is negative.
If it is negative, increment answer by the number of remaining columns in the current row (totalColumns - col), as all subsequent elements in that row will also be negative.
Move to the next row by decrementing row.
If the current element is non-negative, move to the next column by incrementing col.

### __NOTE:__ We are mainly taking advantage of the condition that the matrix is sorted in a descending order. This means that the count of the negative numbers in the array at the ith index will be less than or equal to the count of the negative numbers of the array at the (i+1)th index. 


__Complexity__
Time complexity:O(M+N)<br>
Space complexity:O(1)<br>

```
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int answer=0;
        int row=grid.size()-1;
        int col=0;
        int totalColumns=grid[0].size();
        while(row>=0 and col<totalColumns){
            if(grid[row][col]<0){
                answer+=totalColumns-col;
                row--;
            } else {
                col++;
            }
        }
        return answer;
    }
};
```