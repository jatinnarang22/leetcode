class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n =nums.length;
        
        int ans =nums[0];
        System.out.print(ans);
        for(int i=1;i<n;i++){
            ans=ans^nums[i];
        }
        return ans ;
    }
}