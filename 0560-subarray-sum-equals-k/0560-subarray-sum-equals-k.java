class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer,Integer>m=new HashMap<>();
        m.put(0,1);
        int val=0,
        ans=0;
        for(int i=0;i<nums.length;i++){
            val+=nums[i];
            int t=val-k;
            if(m.containsKey(t)){
              ans+=m.get(t); 
            }
            m.put(val,m.getOrDefault(val,0)+1);
        }
        return ans;
    }
}