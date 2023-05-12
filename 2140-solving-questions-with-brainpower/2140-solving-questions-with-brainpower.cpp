class Solution {
public:
    long long rec(vector<vector<int>>&questions,vector<long long>&dp,int ind){
        if(ind>=questions.size()){
            return 0;
        }
        if(dp[ind]!=-1)return dp[ind];
       long long take=questions[ind][0]+rec(questions,dp,ind+questions[ind][1]+1);
        long long  nottake=rec(questions,dp,ind+1);
        return dp[ind]=max(take,nottake);
      
        
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n,-1);
        return rec(questions,dp,0);
        
    }
};