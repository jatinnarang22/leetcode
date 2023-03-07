class Solution {
    public long minimumTime(int[] time, int totalTrips) {
        long l=0;
        long u=100000000000000L;
        long ans=u;
        while(l<u){
            long mid=(l+u)/2;
            long cnt=0;
            
            for(int i=0;i<time.length;i++){
                long k=mid/time[i];
                cnt+=k;
            }
            if(cnt>=totalTrips){ans=Math.min(ans,mid); u=mid;}
            else l=mid+1;
        }
        return ans;
    }
}