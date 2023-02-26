class Solution {
    public int[] leftRigthDifference(int[] nums) {
        int val=0;
        for(int it: nums){
            val+=it;
        }
        int leftsum=0;
        int ans[]=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ans[i]=Math.abs((val-leftsum-nums[i])-leftsum);
            leftsum+=nums[i];
        }
        return ans;
    }
}