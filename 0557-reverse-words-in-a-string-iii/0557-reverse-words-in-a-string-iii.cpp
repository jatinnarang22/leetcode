class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string ans;
        string helper;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(helper.begin(),helper.end());
                ans+=helper+" ";
                helper="";
            }
            else{
                helper+=s[i];
            }
        }
        ans.erase(ans.length()-1);
        return ans;
    }
};