class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int flag=1;
        if(nums.size()==1)return true;
        for(int i=1;i<nums.size();i++){
            if( nums[i]<nums[i-1]){
                if(i==1 || nums[i-2]<=nums[i]){
                    nums[i-1]=nums[i];
                }
                else nums[i]=nums[i-1];
                break;
            }
        }
        for(int i=1;i<nums.size();i++){
            
            cout<<nums[i];
            if(nums[i]<nums[i-1]){
                cout<<nums[i];
                return false;
            }
        }
        return true;
    }
};