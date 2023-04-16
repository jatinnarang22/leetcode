class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>v;
        string s;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                v.push_back(s);
                cout<<1;
                s="";
            }
            else s+=text[i];
        }
         v.push_back(s);
        
        vector<string>ans;
        // cout<<v.size();
        for(int i=0;i<v.size()-2;i++){
            // cout<<v[i];
            if(v[i]==first){
                if( v[i+1]==second){
                    ans.push_back(v[i+2]);
                }
            }
        }
        return  ans;
    }
};