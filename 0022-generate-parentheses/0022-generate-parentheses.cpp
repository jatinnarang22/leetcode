class Solution {
public:
     vector<string>ans;
    void fun(int n,int m,string val){
        if(n==0 && m==0){
            ans.push_back(val);
            return;
        }
        if(n<m){
            fun(n,m-1,val+')');
        }
        if(n>0)
            fun(n-1,m,val+'(');
    }
    vector<string> generateParenthesis(int n) {
       
        fun(n,n,"");
        
        return ans;
    }
};