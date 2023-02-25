class Solution {
    public int maxProfit(int[] prices) {
        int mins=prices[0];    
        int maxs=0;
        for(int i=0;i<prices.length;i++){
            int t=prices[i]-mins;
            mins=Math.min(mins,prices[i]);
            maxs=Math.max(maxs,t);
        }
        return maxs;
    }
}