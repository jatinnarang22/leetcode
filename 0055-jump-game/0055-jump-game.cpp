class Solution {
public:
   bool rec(vector<int>&arr,int ind,vector<int>&dp){
        if(ind==arr.size()-1)return true;
        if(arr[ind]==0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        for(int i=1;i<=arr[ind];i++){ 
            if(i<arr.size() and rec(arr,i+ind,dp))
           return dp[ind]=true;
        }
        return dp[ind]=false;
    }
 bool canJump(vector<int>& arr) {
        vector<int>dp(arr.size(),-1);
        return rec(arr,0,dp);
    }
};