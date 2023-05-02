class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)nums[i]=1;
            else if(nums[i]<0)nums[i]=-1;
        }
        for(auto it :nums){
            ans*=it;
        }
        cout<<ans;
        if(ans>0)return 1;
        else if(ans<0)return -1;
        else return 0;
    }
};