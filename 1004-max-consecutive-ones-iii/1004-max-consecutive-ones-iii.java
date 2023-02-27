class Solution {
    public int longestOnes(int[] nums, int k) {
          int n=nums.length;
        int i=0,j=0;
        int countZeros=0,ans=Integer.MIN_VALUE;
        while(j<n){
            if(nums[j]==0)countZeros++;
            while(countZeros>k){
                if(nums[i]==0)countZeros--;
                i++;
            }
            ans=Math.max(ans,j-i+1);
            j++;
        }
        return ans;
    }
}