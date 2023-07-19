class Solution {
public:
    int maxProduct(vector<int>& nums) {
     
        int rightarray=1;
        int leftarray=1;
        int mx=INT_MIN;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(leftarray==0)leftarray=1;
            if(rightarray==0)rightarray=1;
            leftarray*=nums[i];
            
            rightarray*=nums[n-i-1];
            
            mx=max(leftarray,max(rightarray,mx));
        }
        return mx;
    }
};