class Solution {
public:
    void rec(vector<int>nums,int i,vector<int>a,vector<vector<int>>&ans){
       
        if(i==nums.size()){
            ans.push_back(a);
            
            return;
        }
        a.push_back(nums[i]);
        rec(nums,i+1,a,ans);
        a.pop_back();
        rec(nums,i+1,a,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>a;
        rec(nums,0,a,ans);
        return ans;
    }
};