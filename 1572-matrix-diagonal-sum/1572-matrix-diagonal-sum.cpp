class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int ans=0;
        int n=mat.size();
        int k=n-1;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    ans+=mat[i][j];
                }
                   // ans+=mat[i][k];
                   
            }
            if(i!=k)
            ans+=mat[i][k];
                      k--;
        }
        return ans;
    }
};