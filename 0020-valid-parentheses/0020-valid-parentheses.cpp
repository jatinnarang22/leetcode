class Solution {
public:
    bool isValid(string s) {
     stack<char>f;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i] =='(' || s[i]=='['){
                f.push(s[i]);
            }
            else if(f.empty())return false;
            char c=f.top();
           if(s[i]==')' || s[i]=='}' || s[i]==']'){
               if((s[i] == ')' && c != '(') ||(s[i] == '}' && c!= '{')||(s[i] == ']' && c!= '['))
                   return false;
               else{
                   f.pop();
               }
           }
   
        }
        if(f.empty()){
            return true;
        }else
        return false;
    }
};