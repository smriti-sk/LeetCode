class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m= size(jewels);
        int n= size(stones);
        unordered_map<char, vector<int>> j;
        unordered_map<char, vector<int>> s;
        unordered_map<char, vector<int>> :: iterator z;
        int count=0;

        for (int i=0; i<m ; i++ ){
            j[jewels[i]].push_back( i);
        }
        for (int i=0; i<n; i++){
            s[stones[i]].push_back(i);
        }
        for (int i=0; i<n; i++){
            char key = stones[i];
            if (j.find(key) != j.end()){
                count++;
            }
        }
        return count;
    }
};