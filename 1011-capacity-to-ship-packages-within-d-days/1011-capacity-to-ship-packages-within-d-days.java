class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int n=weights.length;
        int low=0;
        int height=0;
     for(int i=0;i<n;i++){
         height+=weights[i];
         low=Math.max(low,weights[i]);
     }int ans=0;
        while(low<=height){
            int mid = (low+height)/2;
            int count=0;
            if(check(weights,days,mid)){
                ans=mid;
                height=mid-1;
            }
            else low=mid+1;
        }
            // System.out.print(low+" "+height);
    return ans;
    }
      boolean check(int[] weights, int days, int capacity){
        int requiredDays = 1;
        int currWeight = 0;
        for(int i : weights){
            if(currWeight + i > capacity){
                requiredDays++;
                currWeight = 0;
            }
            currWeight += i;
        }
        if(requiredDays > days) return false;
        return true;
    }
}