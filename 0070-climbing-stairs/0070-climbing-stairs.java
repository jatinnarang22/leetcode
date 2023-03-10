class Solution {
    public int climbStairs(int n) {
        int []dp=new int[n+1];
        for(int i=0;i<n+1;i++){
            dp[i]=-1;
        }
        return rec(n,dp);
    }
    public static int rec(int n,int[] dp){
        if(n==0)return 1;
        if(n==1)return 1;
        if(dp[n]!=-1)return dp[n];
        System.out.print(n);
        int left=rec(n-1,dp);
        int right=rec(n-2,dp);
        dp[n]=left+right;
        return left+right;
    }
}