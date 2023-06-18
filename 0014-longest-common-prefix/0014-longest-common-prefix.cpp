class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        int siz=strs[0].size();
        int k=0;
            while(k<siz){
            cout<<strs[0][k];
            int flag=1;
            // cout<<i;
            for(int j=0;j<strs.size();j++){
                if(strs[0][k]!=strs[j][k]){
                    flag=0;
                    break;
                }
                
            }
            if(flag==0){
                break;
            }
            ans+=strs[0][k];
            k++;
        }
        return ans;
    }
};