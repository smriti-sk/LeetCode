class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> prevRow;
        for (int i=0; i<numRows; i++){
            vector<int> row;
            for (int j=0; j<=i; j++){
                if (j==0 || j==i){
                    row.emplace_back(1);
                }
                else{
                    row.emplace_back(prevRow[j-1] + prevRow[j]);
                }
            }
            triangle.emplace_back(row);
            prevRow = row;
        }

        return triangle;
    }
};