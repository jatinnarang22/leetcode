class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int,vector<int> >m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        vector<long long>v(nums.size(),0);
        for(auto it:m){
            if(it.second.size()==1){continue;}
            long long  sum=0;
            for(int i=0;i<it.second.size();i++)sum+=it.second[i];
            long long prefixsum=0;
            for(int i=0;i<it.second.size();i++){
                long long lval=(it.second.size()-i-1);
                long long  rval=(i);
                cout<<lval<<" "<<rval<<"  ";
                long long left=prefixsum;
                long long right=sum-prefixsum-it.second[i];
                prefixsum+=it.second[i];
                v[it.second[i]]=abs(left+(it.second[i]* (long long)lval)-(right+(it.second[i]*(long long )rval)));
            }
       
        }
         return v;
    }
    
};