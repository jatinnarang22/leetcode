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
             if(m.containsKey(val)){
                int g=m.get(val);
                 // System.out.print(g);
            m.put(val,g+1);
            }
            else m.put(val,1);
            // System.out.print(val);
        }
        return ans;
    }
}