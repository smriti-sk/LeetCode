# 26. Remove Duplicates from Sorted Array

In this problem, the key point to focus on is the input array being sorted. As far as duplicate elements are concerned, their positioning in the array when the given array is sorted, would be together.

We need to modify the array in-place and the size of the final array would potentially be smaller than the size of the input array. So, we ought to use a two-pointer approach here. One, that would keep track of the current element in the original array and another one for just the unique elements.

## Essentially, once an element is encountered, you simply need to bypass its duplicates and move on to the next unique element.

```
int count = 0;
for(int i = 1; i < n; i++){
    if(A[i] == A[i-1]) count++;
    else A[i-count] = A[i];
}
return n-count;
```