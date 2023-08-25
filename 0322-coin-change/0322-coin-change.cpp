class Solution {
public:
    
    int f(int ind,vector<int> & coins,int target,vector<vector<long>> & dp){
        if(ind < 0){
            return 1e9;
        }
        
        if(target == 0) return 0;
        if(dp[target][ind] != -1) return dp[target][ind];
        
        int notPick = f(ind-1,coins,target,dp);
        int pick = 1e9;
        
        if(coins[ind] <= target){
            pick = 1 + f(ind,coins,target-coins[ind],dp);
        }
        
        
        return dp[target][ind] = min(notPick,pick);
        
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<long>> dp(amount+1,vector<long>(coins.size()+1,-1));
        int val =  f(coins.size()-1,coins,amount,dp);
        
        if(val == 1e9) return -1;
        
        return val;
    }
};


/*
class Solution {
public:
    int sol(vector<int>& coins , int n , int k,vector<int> &dp){
        if(n==0){
            if(k%coins[0]==0) return k/coins[0];
            else return 1e9;
        }
        if(dp[n]!=-1) return dp[n];
        int nottake=0+sol(coins,n-1,k,dp);
        int take=INT_MAX;
        if(coins[n] <= k){
            
            take= 1 + sol(coins,n,k-coins[n],dp);
            // if(j!=INT_MAX)take=1+j;
        }
        
        dp[n] = min(take, nottake);
        return dp[n];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(n,-1);
        int val=sol(coins,n-1,amount,dp);
        if(val==1e9)return -1;
        
        return val;
        
    }
};
*/