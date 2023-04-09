class Solution {
public:
    int f(int i,int j,vector<vector<int>>& obs,vector<vector<int>>&dp){
        if(i>=0 && j>=0 && obs[i][j]==1)
            return 0;
        if(i==0 && j==0 ) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=f(i-1,j,obs,dp);
        int left=f(i,j-1,obs,dp);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n=obs.size();
        int m=obs[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,obs,dp);
    }
};