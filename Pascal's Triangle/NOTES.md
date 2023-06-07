# 118. Pascal's Triangle

two loops, one go through the row, one go through the column

database: pretty straight forward, ArrayList

calculate element value: K(i)(j)=K(i-1)(j-1)+K(i-1)(j) except for the first and last element

```
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
```