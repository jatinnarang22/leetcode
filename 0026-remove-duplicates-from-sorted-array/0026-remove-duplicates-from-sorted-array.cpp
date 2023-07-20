class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=nums.size();
     set<int>s={nums.begin(),nums.end()};
     nums.clear();
     for(auto i:s)
     nums.push_back(i);
     int k=nums.size();
     for(int i=j;i<=k;i++){
         nums.push_back(',');
     }
     
     return k;
     
        
    }
};