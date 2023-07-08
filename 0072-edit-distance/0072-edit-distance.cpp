class Solution {
public:
    // int editdis(string a,int i,int n , string b , int j , int m , vector<vector<int>>dp ){
    //     if(i==n ){
    //         return m-j;
    //     }
    //     if(j==m){
    //         return n-i;
    //     }
    //     int cnt=0;
    //     if(dp[i][j]!=0)return dp[i][j];
    //     if(a[i]==b[j]){
    //         cnt+=editdis(a,i+1,n,b,j+1,m,dp);
    //     }
    //     else{
    //         cnt+=min(1+editdis(a,i+1,n,b,j+1,m,dp),min(1+editdis(a,i,n,b,j+1,m,dp),1+editdis(a,i+1,n,b,j,m,dp)));
    //     }
    //     dp[i][j]=cnt;
    //     return dp[i][j];
    // }
    int minDistance(string word1, string word2) {
        int a=word1.size()+1,b=word2.size()+1;
        vector<vector<int>>dp(a,vector<int>(b,0));
        
        for(int i=0;i<word2.length();i++){
            dp[word1.length()][i]=word2.length()-i;
        }
        for(int i=0;i<word1.length();i++){
            dp[i][word2.length()]=word1.length()-i;
        }
        for(int i=word1.size()-1;i>=0;i--){
            for(int j=word2.size()-1;j>=0;j--){
                if(word1[i]==word2[j]){
                    dp[i][j]+=dp[i+1][j+1];
                }
                else
                {
                dp[i][j]+=min(1+dp[i+1][j+1],min(1+dp[i][j+1],1+dp[i+1][j]));
                }
            }
        }
        
        return dp[0][0];
       // return editdis(word1,0,word1.size(),word2,0,word2.size(),dp);
    }
};