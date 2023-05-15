class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l=1;
        int he=1000000000;
        int val=he;
        while(l<he){
            int mid=l + (he - l) / 2;
            int total=0;
            // cout<<mid;
            for(auto it:piles){
                int val=it/mid;
                total+=val;
                if(it%mid!=0)total++;
              
            }
            // cout<<total;
            if(total<=h)he=mid;
            else l=mid+1;
            cout<<he;
        }
        return he;

    }
};