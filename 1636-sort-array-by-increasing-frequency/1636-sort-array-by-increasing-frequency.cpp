class Solution {
public:
 bool static compare(pair<int, int>& a, pair<int, int>& b){
   if(a.second == b.second) {
        return a.first > b.first;
    }
    return a.second<b.second;
};
vector<int>frequencySort(vector<int>nums){
    vector<pair<int,int>>freq;
    int cnt=1;
    for(int i=0;i<nums.size();i++){
         bool found = false;
        for(auto& p : freq) {
            if(p.first == nums[i]) {
                p.second++;
                found = true;
                break;
            }
        }
        if(!found) {
            freq.push_back({nums[i], 1});
        }
    }
    sort(freq.begin(), freq.end(), compare);
     vector<int> result;
    for(auto& p : freq) {
        for(int i = 0; i < p.second; i++) {
            result.push_back(p.first);
        }
    }
    
    return result;
    
    
}
};