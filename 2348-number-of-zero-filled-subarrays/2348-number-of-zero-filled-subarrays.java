class Solution {
    public long zeroFilledSubarray(int[] nums) {
        
        long n=nums.length;
        
        long cnt=0;
        long continues=0;
        if(nums[0]==0){
            cnt++;
            continues++;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==0){
                if(nums[i-1]==0){
                    cnt+=continues+1;
                    continues++;
                }
                else{
                    cnt++;
                    continues++;
                }
            }
            else continues=0;
        }
        
        return cnt;
    }
}