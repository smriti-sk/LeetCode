class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int> &v = ans.back(); //pointer to last interval in ans
                int y=v[1]; //end time of last interval

                if (intervals[i][0]<= y){ //overlapping condition true
                    v[1] = max(y, intervals[i][1]);
                }
                else {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};