# 122. Best Time to Buy and Sell Stock II

### Greedy approach
Ex: nums: 
7|1|5|3|6|4 
-|-|-|-|-|-|
a | b |c|d|e|f

if a to d is profit: 
profit= d-a 

=> profit= (b-a)+ (c-b) + (d-c)

_therefore,_
```
if (nums[i] > nums[i-1])

profit += nums[i]-nums[i-1]
```


