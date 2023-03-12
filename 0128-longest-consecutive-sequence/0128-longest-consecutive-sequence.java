class Solution {
    public int longestConsecutive(int[] nums) {
        
        if(nums.length==0)return 0;
        Set<Integer>s=new HashSet<>();
        
        for(int i=0;i<nums.length;i++){
            s.add(nums[i]);
        }
        int max=0;
        for(int i=0;i<nums.length;i++){
            int n=nums[i];
            if(s.contains(n-1))continue;
            int cnt=0;
            
            while(s.contains(n+1) ){
                cnt++;
                // s.remove(n+1);
                n++;
            }
            max=Math.max(max,cnt);
        }
        return max+1;
    }
}