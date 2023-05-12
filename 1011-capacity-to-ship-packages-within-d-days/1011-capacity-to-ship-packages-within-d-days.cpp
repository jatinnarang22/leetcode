class Solution {
public:
  bool check(int capacity ,vector<int>weights ,int days ){
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
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0;
        int h=0;
        for(int i=0;i<weights.size();i++){
            l=max(l,weights[i]);
            h+=weights[i];
        }
        // no do binary search in this que
        // cout<<h;
        int ans=0;
        
        while(l<=h){
            
            int mid=(h+l)/2;
            cout<<mid<<" ";
            //now check if the ans is possible 
            //if it is then we have to reduce the height to mid
            //if not then increment the low to mid
            if(check(mid,weights,days)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};