class Solution {
public:
    string finalString(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                cout<<s[i]<<i;
                reverse(s.begin(),s.begin()+i);
                s.erase(s.begin()+i);
                i--;
            }
            // cout<<s[i]<<i;
        }

        
        return s;
    }
};