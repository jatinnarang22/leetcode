class Solution {
public:
    int rec(vector<int>nums1,int i,vector<int>nums2,int j,int dp[][1001]){
        if(i==nums1.size() || j==nums2.size())return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        if(nums1[i]==nums2[j]){
            return dp[i][j]=1+rec(nums1,i+1,nums2,j+1,dp);
        }
        else{
            return dp[i][j]=max(rec(nums1,i+1,nums2,j,dp),rec(nums1,i,nums2,j+1,dp));
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        int dp[1001][1001];
        
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                dp[i][j]=-1;
            }
        }
        return rec(nums1,0,nums2,0,dp);
    }
};