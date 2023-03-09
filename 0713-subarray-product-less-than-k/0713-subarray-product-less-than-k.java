class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if(k<=1)return 0;
        
        int prod=1;
        int l=0;
        int u=0;
        int ans=0;
        while(u<nums.length){
            prod=prod*nums[u];
            
            while(prod>=k){
                prod=prod/nums[l];
                l++;
            }
            ans+=(u-l+1);
            u++;
        }
        return ans;
    }
}