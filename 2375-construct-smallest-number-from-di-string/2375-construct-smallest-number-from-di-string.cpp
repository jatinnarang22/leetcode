class Solution {
public:
    string smallestNumber(string pattern) {
        
        int s=0;
        string s1="",s2="",ans="";
        for(int i=0;i<=pattern.size();i++){
            while(pattern[i]=='I' && i<pattern.size() ){
                s1+='1'+i;
                cout<<s1;
                i++;
            }
            ans+=s1;
            // s1+=i;
            s=i;
            while(pattern[i]!='I' && i<pattern.size()){
                i++;
            }
            int j=i;
            // cout<<j;
            while(s<=j){
                // cout<<j;
                s2+='1'+j;
                // cout<<s2;
                j--;
            }
            // cout<<s2;
            // cout<<ans;
            ans+=s2;
            // break;
            s1="";
            s2="";
            
        }
        return ans;
    }
};