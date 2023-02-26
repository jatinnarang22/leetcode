class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
       priority_queue<int>pq;
        int min_no=INT_MAX,diff=INT_MAX;
        
        for(auto i: nums){
            if(i%2!=0)i*=2;
            pq.push(i);
            min_no=min(i,min_no);
        }
        
        while(pq.top()%2==0){
            int mx=pq.top();
            pq.pop();
            diff=min(diff,mx-min_no);
            min_no=min(min_no,mx/2);
            
            pq.push(mx/2);
        }
        return min(diff,pq.top()-min_no);
    }
};