class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tgas=0;
        int tcost=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
            tgas+=gas[i];
            tcost+=cost[i];
        }
        if(tgas<tcost)return -1;
        int rem=0;
        int ans=0;
        for(int i=0;i<n;i++){
            rem+=gas[i]-cost[i];
            if(rem<0){
                ans=i+1;
                rem=0;
            }
            
        }
        return ans;
    }
};