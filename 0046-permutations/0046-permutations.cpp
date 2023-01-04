class Solution {
public:
    void sol(vector<int>nums,int val,vector<vector<int>>&ans){
        if(nums.size()==val){
            vector<int> temp=nums;
            ans.push_back(temp);
            return;
        }
        if(val>=nums.size()){
            return;
        }
        for(int i=val;i<nums.size();i++){
            swap(nums[i],nums[val]);
            cout<<i<<" "<<val<<" ";
            sol(nums,val+1,ans);
            // swap(nums[i],nums[val]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        sol(nums,0,ans);
        return ans;
    }
};