class Solution {
public:
    
void sol(vector<int>n,int val,set<vector<int>>& set,vector<int>ans){
    
    if(val == n.size()){
        // sort(ans.begin(),ans.end());
       set.insert(ans);
        return;
    }
    
    ans.push_back(n[val]);
    sol(n,val+1,set,ans);
    ans.pop_back();
    sol(n,val+1,set,ans);
    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>> set;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        sol(nums,0,set,ans);
        
        
        for(auto itr = set.begin(); itr != set.end(); itr++){
            vector<int> x=*itr;
            v.push_back(x);
        }
        return v;
    }

};