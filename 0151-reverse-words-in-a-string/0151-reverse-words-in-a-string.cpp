class Solution {
public:
    string reverseWords(string s) {
        string ss="";
        stack<string>sk;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && ss!=""){
                cout<<ss<<"1";
                sk.push(ss);
                ss="";
            }else if(s[i]!=' ') ss+=s[i];

        }
        if(ss!="")
        sk.push(ss);
        ss="";
        while(!sk.empty()){
            ss+=sk.top();
            sk.pop();
            if(!sk.empty())
                
            ss+=" ";
        }
        return ss;
    }
};