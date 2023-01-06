class Solution {
public:
    int count=0;
    bool ispossible(int row,int col,vector<vector<int>>board,int n){
        
    int r=row;
      int c= col;

      while (r >= 0 && c >= 0) {
        if (board[r][c] == 1)
          return false;
        r--;
        c--;
      }

      int c1 = col;
      int r1 = row;
      while (c1 >= 0) {
        if (board[r1][c1] == 1)
          return false;
        c1--;
      }

      int ro = row;
      int co = col;
      while (ro < n && co >= 0) {
        if (board[ro][co] == 1)
          return false;
        ro++;
        co--;
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