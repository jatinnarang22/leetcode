class Solution {
public:
    int count=0;
    bool ispossible(int row,int col,vector<vector<int>>board,int n){
        
    int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 1)
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 1)
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 1)
          return false;
        row++;
        col--;
      }
      return true;
    }
    void sol(vector<vector<int>>&board,int n,int col){
        if(col==n){
            count++;
            return ;
        }
        for(int row=0;row<n;row++){
            if(ispossible(row,col,board,n)){
                board[row][col]=1;
                sol(board,n,col+1);
                board[row][col]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>>board(n,vector<int>(n,0));
       sol(board,n,0);
        return count;
    }
};