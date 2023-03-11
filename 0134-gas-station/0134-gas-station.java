class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
           int tgas=0;
        int tcost=0;
        int n=gas.length;
        for(int i=0;i<n;i++){
            tgas+=gas[i];
            tcost+=cost[i];
        }
        if(tgas<tcost)return -1;
        int res=0;
        int ans=0;
        for(int i=0;i<n;i++){
            res+=gas[i]-cost[i];
            if(res<0){
                ans=i+1;
                res=0;
            }
            
        }
        return ans;
        
    }
}