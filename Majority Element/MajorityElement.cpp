class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = size(nums);
        int countOFMax =0;
        int maxElement = nums[0];
        for (int i=0;i< n; i++){
            if (countOFMax==0) { 
                //time to change the maxElement 
                //(because current element took the lead now)
                maxElement = nums[i];
            }

            //count of maxElement: increment or decrement?
            countOFMax += (maxElement == nums[i])? 1: -1;
        }
        return maxElement;
    }
};