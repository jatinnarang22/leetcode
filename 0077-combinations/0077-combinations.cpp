class Solution {
public:
    vector<vector<int> > ans;
    void f(int n,int k,int i,vector<int>&v){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        // for(int i=0;i<v.size();i++)cout<<v[i];
        // cout<<endl;
        if(i<=n){
        v.push_back(i);
        f(n,k,i+1,v);
        v.pop_back();
        f(n,k,i+1,v);
        }
        return ;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        f(n,k,1,v);
        
        return ans;
    }
};