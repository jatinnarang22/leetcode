class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size()-1;
        int m=grid[0].size()-1;
        cout<<n<<m;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=dp.size()-1;i>=0;i--){
            for(int j=dp[0].size()-1;j>=0;j--){
                if(i==n && j==m){
                    dp[i][j]=grid[i][j];
                }
                else if(i==n){
                    dp[i][j]=dp[i][j+1]+grid[i][j];
                }
                else if(j==m){
                    dp[i][j]=dp[i+1][j]+grid[i][j];
                }
                else{
                    dp[i][j]=min(dp[i+1][j],dp[i][j+1])+grid[i][j];
                }
            }
        }
        return dp[0][0];
    }
};