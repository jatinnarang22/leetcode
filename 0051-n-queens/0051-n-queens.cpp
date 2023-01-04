class Solution {
public:

    bool ispossible(vector<string>board,int row,int col,int n){
        
    int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
    void sol(int col,vector<string>&board,vector<vector<string>>&ans,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(ispossible(board,row,col,n)){
                board[row][col]='Q';
                // cout<<row;
                sol(col+1,board,ans,n);
                board[row][col]='.'; 
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
        vector<vector<string>>ans;
         sol(0,board,ans,n);
         return ans;
    }
};