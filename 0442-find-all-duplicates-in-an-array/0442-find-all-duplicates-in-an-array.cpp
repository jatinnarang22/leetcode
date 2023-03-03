class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     
        unordered_map<int,int>v;
        int n=nums.size();
        
        for(int i=1;i<=n;i++){
            v[i]=0;
        }
        for(int i=0;i<n;i++){
            if(v.find(nums[i])!=v.end()){
                v[nums[i]]++;
            }
        }
        vector<int>ans;
        for(auto it:v){
            if(it.second==2)ans.push_back(it.first);
        }
        return ans;
    }
};