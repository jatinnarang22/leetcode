class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        if(q.size()==1)return q.top();
       while(q.size()!=0 ){
           int x=q.top();
           q.pop();
           int y=q.top();
           q.pop();
           if(x>y){
               q.push(x-y);
           }
           if(q.size()==1)break;
       }
        if(q.size()==0)return 0;
        return q.top();
    }
};