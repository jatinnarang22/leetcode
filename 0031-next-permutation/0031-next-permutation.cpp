class Solution {
public:
    void next_perm(int change,vector<int>& nums,int i){
        int flag=0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]<=nums[change]){
                cout<<j<<" "<<change;
                swap(nums[j-1],nums[change]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            swap(nums[change],nums[nums.size()-1]);
        }
        sort(nums.begin()+i,nums.end());
        
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int flag=0;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                next_perm(i-1,nums,i);
                flag=1;
                break;
            }
        }
        if(flag==0){
            sort(nums.begin(),nums.end());
        }
    }
};