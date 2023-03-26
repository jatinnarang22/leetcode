class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<long long>pre(n+1,0);
        
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        nums.insert(nums.begin(),0);
        n++;
        vector<long long>ans;
        for(auto q : queries){
            long long  l=lower_bound(nums.begin(),nums.end(),q)-nums.begin()-1;
            long long u=upper_bound(nums.begin(),nums.end(),q)-nums.begin();
            long long val=q*l-(pre[l]);
            // cout<<val;
            if(u!=n){
                val+=(pre[n-1]-pre[u-1])-q*(n-u);
            }
            ans.push_back(val);
        }
        return ans;
    }
};