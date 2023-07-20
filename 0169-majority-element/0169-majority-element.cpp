class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        int val=0;
        for(auto it:m){
            if(ans<it.second){
                ans=it.second;
                val=it.first;
            }
        }
        return val;
    }
};