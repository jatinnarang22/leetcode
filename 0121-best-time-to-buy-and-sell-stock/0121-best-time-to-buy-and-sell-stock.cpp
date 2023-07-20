class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprofit=0;
        int maxprofit=prices[0];
        for(int i=0;i<prices.size();i++){
            int h=prices[i]-maxprofit;
            cout<<h;
            maxprofit=min(maxprofit,prices[i]);
            minprofit=max(minprofit,h);
        }
        return minprofit;
    }
};