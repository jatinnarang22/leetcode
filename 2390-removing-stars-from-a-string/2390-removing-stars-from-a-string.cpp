class Solution {
public:
    string removeStars(string s) {
        
        string r;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                r.pop_back();
            }
            else{
                r+=s[i];
            }
        }
        return r;
    }
};