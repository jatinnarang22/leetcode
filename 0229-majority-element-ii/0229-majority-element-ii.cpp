class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int majority = nums.size()/3;
        vector<int>ans;
        unordered_map<int,int>m;
        
        for(auto it: nums){
            m[it]++;
        }
        for(auto it:m){
            if(it.second>majority){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};