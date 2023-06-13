# 1365. How Many Numbers Are Smaller Than the Current Number

## Approach
Make an array 'count' of a range the values in 'nums'. (in this problem, Contraint: 0 <= nums[i] <= 100).<br>
Keep count of the numbers less the current number appears in the nums as we loop through.
Eg nums: 
|8|1|2|2|3|
|-|-|-|-|-|

 



	```
    vector<int> answer;
	int i, j;
	int count[101] = {0};

count (initially):
|0|0|0|0|0|0|0|0|0|  
|-|-|-|-|-|-|-|-|-|
|0|1|2|3|4|5|6|7|8| 



	// Added all the numbers of nums array to their respective index position
	// ex. if nums[i]=80, you increment value of count array by 1 at index (80-1)
	for(i = 0; i < nums.size(); i++)
		count[nums[i]]++;

count :
|0|1|2|1|0|0|0|0|1|  
|-|-|-|-|-|-|-|-|-|
|0|1|2|3|4|5|6|7|8| 



	// Incrementing and reassigning values based on previous counts element
	// ex. if there are 4 small values than 9th element. You want to add count to the 10th, and continue adding till the 100th element because constrait is 0 <= nums[i] <= 100
	for(i = 1; i < 101; i++) 
		count[i] += count[i - 1];

count (finally):
|0|1|3|4|4|4|4|4|5|  
|-|-|-|-|-|-|-|-|-|
|0|1|2|3|4|5|6|7|8| 

	// Simply pushing back the value computed above
	for(i = 0; i < nums.size(); i++) {
		if(nums[i] == 0)
			answer.push_back(0);
		else
			answer.push_back(count[nums[i] - 1]);

	}
	return answer;
    ```

