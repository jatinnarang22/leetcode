class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        int row=0,col=0,row_end=matrix.size()-1,col_end=matrix[0].size()-1;
        vector<int>v;
        while(row<=row_end && col<=col_end){
          for(int i=col;i<=col_end;i++){
              v.push_back(matrix[row][i]);
          }
            row++;
        for(int j=row;j<=row_end;j++){
            v.push_back(matrix[j][col_end]);
        }
            
            col_end--;
            if(row<=row_end){
                for(int m=col_end;m>=col;m--){
                    v.push_back(matrix[row_end][m]);
                }
                row_end--;
            }
            
            if(col<=col_end){
                for(int n=row_end;n>=row;n--){
                    v.push_back(matrix[n][col]);
                }
                col++;
            }
            
        }
        return v;
    }
};