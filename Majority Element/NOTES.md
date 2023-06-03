# 169. Majority Element

## Approach 1

## Approach (Fastest)

WE know there is an element which is present more than n/2n/2n/2 times so keep a counter and elemnt varaible which will track if element is same as previous then counter will be incremnted else decremented .

If our counter becomes 0 somewhere we will change the element because its lead is over now we will take another element (give chance to other as well) and keep doing the same with it but we will think that we might lost our element by taking the new element but no it will come again latter Since we know there is an element whose occurence is more than n/2 n/2n/2 times . So no matter What how many times will change the elemnt it will come again , either its counter will not become zero or it will come agian in lead because rest elemnts can have max n/2−1 n/2 -1n/2−1 occurence so they can't win form it.

```
    int majorityElement(vector<int>& arr) {
        int ele=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(count==0)ele=arr[i];
            count+=(ele==arr[i])?1:-1;
        }
        return ele;
    }
```

**Complexity**

- Time complexity:O(N)
- Space complexity:O(1)
