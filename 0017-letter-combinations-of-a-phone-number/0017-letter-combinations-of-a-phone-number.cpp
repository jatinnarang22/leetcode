class Solution {
public:
    void solve(vector<string>&ans,string op,string digits,int i){
        if(i==digits.size()){
            ans.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        string op3=op;
        
        if(digits[i]=='2'){
                op1.push_back('a');
                op2.push_back('b');
                op3.push_back('c');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else 
            if(digits[i]=='3'){
                op1.push_back('d');
                op2.push_back('e');
                op3.push_back('f');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else 
            if(digits[i]=='4'){
                op1.push_back('g');
                op2.push_back('h');
                op3.push_back('i');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else
            if(digits[i]=='5'){
                op1.push_back('j');
                op2.push_back('k');
                op3.push_back('l');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else
            if(digits[i]=='6'){
                op1.push_back('m');
                op2.push_back('n');
                op3.push_back('o');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else
            if(digits[i]=='7'){
                string op4=op;
                op1.push_back('p');
                op2.push_back('q');
                op3.push_back('r');
                op4.push_back('s');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
                solve(ans,op4,digits,i+1);
            }
        else
             if(digits[i]=='8'){
                op1.push_back('t');
                op2.push_back('u');
                op3.push_back('v');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
            }
        else
            if(digits[i]=='9'){
                string op4=op;
                op1.push_back('w');
                op2.push_back('x');
                op3.push_back('y');
                op4.push_back('z');
                solve(ans,op1,digits,i+1);
                solve(ans,op2,digits,i+1);
                solve(ans,op3,digits,i+1);
                solve(ans,op4,digits,i+1);
            }
            
    }
    vector<string> letterCombinations(string digits) {
         vector<string>ans;
        if(digits.size()==0)return ans;
        string op;
        solve(ans,op,digits,0);
        return ans;
    }
};