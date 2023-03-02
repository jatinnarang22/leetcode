class Solution {
    public long countSubarrays(int[] nums, long k) {
       long sum=0; long n=nums.length;
        long cnt=0;
        for(int i=0,j=0;j<n;j++){
            sum+=nums[j];
            
              
            while(sum*(j-i+1)>=k){
                // System.out.println(sum);
                sum=sum-nums[i];
                 i++;    
            }
       
              
                cnt+=(j-i+1);
        }
        // cnt+=n-1;
        return cnt;
    }
}