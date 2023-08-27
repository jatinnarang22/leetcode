class Solution {
public:
    vector < vector < int > > ans;
    void fun(vector<int>& cadidates,int target,int n,vector<int>&v,int sum){
         if(sum==target){
             for(int i=0;i<v.size();i++)cout<<v[i];
            ans.push_back(v);
            return;
        }
        if(n<0)return;
        if(sum>target )return;
        // cout<<n;
        // for(int i=0;i<v.size();i++)cout<<v[i];cout<<endl;
        // if(n)
        if(n>0)
        fun(cadidates,target, n-1,v,sum);
        if(n>=0)
        v.push_back(cadidates[n]);
        sum+=cadidates[n];
        cout<<sum;
        fun(cadidates,target,n,v,sum);
        v.pop_back();
        // cout<<sum<<endl;
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        int n=candidates.size();
        fun(candidates,target,n-1,v,0);
        return ans;
    }
};