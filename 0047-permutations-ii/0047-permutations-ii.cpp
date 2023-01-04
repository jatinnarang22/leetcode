class Solution {
public:
    set<vector<int>>s;
    void sol(vector<int>nums,int val,vector<vector<int>>&ans){
        if(val==nums.size()){
            if(s.find(nums)==s.end()){
                ans.push_back(nums);
                
            }
            s.insert(nums);
            return;
                 
        }
        if(val>=nums.size())return;
        
        for(int i=val;i<nums.size();i++){
            swap(nums[i],nums[val]);
            sol(nums,val+1,ans);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sol(nums,0,ans);
        return ans;
    }
};