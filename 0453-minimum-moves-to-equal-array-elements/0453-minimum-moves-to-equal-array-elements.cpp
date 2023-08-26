class Solution {
public:
    int minMoves(vector<int>& nums) {
         int m=INT_MAX;
        
        for(int i=0;i<nums.size();i++)m=min(m,nums[i]);
        
        int cnt=0;
        for(auto it:nums)cnt+=it-m;
        
        
        return cnt;
    }
};