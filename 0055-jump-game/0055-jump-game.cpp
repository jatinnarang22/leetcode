class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            cout<<mx;
            if(mx<i ){
                flag=1;
                return false;
            }
            mx=max(mx,i+nums[i]);
            
        }
        if(flag==0 )return true;
        return false;
    }
};