class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>q;
        for(auto it:gifts){
            q.push(it);
        }
        while(k--){
            long long  h=q.top();
           h= sqrt(h);
            cout<<h<<" ";
            q.pop();
            q.push(h);
        }
        long long ans=0;
        while(!q.empty()){
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};