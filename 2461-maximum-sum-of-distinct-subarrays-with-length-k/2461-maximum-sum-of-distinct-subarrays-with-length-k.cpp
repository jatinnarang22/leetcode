class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
     unordered_map<int,int>m;
        long long sum=0;
        long long mx=0;
        int j=0;
        int i=0;
        while(j<nums.size()){
            m[nums[j]]++;
            sum+=nums[j];
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                
                if(m.size()==k){
                    mx=max(mx,sum);
                }
                m[nums[i]]--;
                
                if(m[nums[i]]==0){
                    m.erase(nums[i]);
                }
                sum-=nums[i];
                i++;
                j++;
                
            }
        }
        return mx;
    }
};