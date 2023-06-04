class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= size(nums);
        int s=0, e=n-1;
        vector<int> ans(n);
        for (int i=n-1; i>=0; i--){
            if (abs(nums[s]) > abs(nums[e])){
                ans[i] = nums[s]*nums[s++];
            }
            else {
                ans[i] = nums[e]*nums[e--];
            }
        }

        return ans;
    }

};