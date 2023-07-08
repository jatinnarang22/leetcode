class Solution {
public:
    int minDistance(string word1, string word2) {
        int h=max(word1.size()+1,word2.size()+1);
        vector<vector<int>>dp(h,vector<int>(h,0));
        int n=word1.size()-1;
        int m=word2.size()-1;
        
        for(int i=n;i>=0;i--){
            for(int j=m;j>=0;j--){
                if(word1[i]==word2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        cout<<n<<m;
        int cnt=0;
        cnt=abs(n+1-dp[0][0]);
        cnt+=abs(m+1-dp[0][0]);
        return cnt;
    }
};