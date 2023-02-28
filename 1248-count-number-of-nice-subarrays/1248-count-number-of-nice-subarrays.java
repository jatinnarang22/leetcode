class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        HashMap<Integer,Integer>m=new HashMap<>();
        int oddcount=0;
        int cnt=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2!=0){
                oddcount++;
            }
            if(oddcount-k==0){
                cnt++;
            }
            if(m.containsKey(oddcount-k)){
                cnt+=m.get(oddcount-k);
            }
            if(m.containsKey(oddcount)){
                int h=m.get(oddcount);
                m.replace(oddcount,h+1);
            }
            else m.put(oddcount,1);
        }
        return cnt;
    }
}