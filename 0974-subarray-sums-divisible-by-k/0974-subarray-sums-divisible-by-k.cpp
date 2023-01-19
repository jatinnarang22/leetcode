class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]++;
        
        int cnt=0;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int v=sum%k;
            if(v<0){
                v+=k;
            }
            if(m.find(v)!=m.end()){
                cnt+=m[v];                
            }
            m[v]++;
        }
        return cnt;
    }
};