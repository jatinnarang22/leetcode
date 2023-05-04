class Solution {
public:
    set<string>p;
    void rec(string s, int i,string v,vector<string>&ans){
        
        if(i==s.size()){
            cout<<v<<" ";
            if(p.find(v)==p.end()){
            p.insert(v);
            ans.push_back(v);
            v="";
            }
            return;
        }
        // cout<<i;
        // rec(s,i+1,v+(s[i]),ans);
            // cout<<toupper('a');
            char h=tolower(s[i]);
            rec(s,i+1,v+(h),ans);
            char g=(toupper(s[i]));
            rec(s,i+1,v+(g),ans);   
    }
    vector<string> letterCasePermutation(string s) {
        
    vector<string>ans;
        
        rec(s,0,"",ans);
        // set<string>ss;
        // for(int i=0;i<ans.size();i++){
        //     ss.insert(ans[i]);
        // }
        // vector<string>f;
        // for(auto it:ss){
        //     f.push_back(it);
        // }
        
        return ans;
    }
};