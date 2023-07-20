class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)return;
        if(nums.size()<k){
            while(k>nums.size())
            k=k-nums.size();
                         }
       int n=nums.size()-k;
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        int i=0;
        // while(i<=k){
            nums.erase(nums.begin(), nums.begin()+n);
            // i++;
        // }
    
    }
};