# TWO SUM
## Optimised solution using maps
            
- Traverse the array whilst checking whether (target - num[i]) is in the map or not.

Example: 
Target = 6
Array nums:
2|7|11|4|
-|-|--|-|

    - if (target - num[i]) is present in the map, then return its index

        ```
        for (int i=0; i<n; i++){
                if (mp.find(target - nums[i]) == mp.end()){
                    mp[nums[i]] = i;
                }
            }
        ```

    - else put the current element in the map table
        ```
        return {mp[target - nums[i]], i};
        ```
        and check the next element

        nums | index
        -----|------
        2    | 0    
        7    | 1    
        11   | 15   





