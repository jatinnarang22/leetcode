class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        
        for(auto it:nums){
            m[it]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto it: m){
            q.push({-it.second,it.first});
        }
        
        vector<int>result;
        
        while(!q.empty()){
            int val=q.top().first;
            int num=q.top().second;
        q.pop();
            
            while(val<0){
                result.push_back(num);
                val++;
            }
        }
        return result;
        
    }
};