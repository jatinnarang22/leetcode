class Solution {
    public int search(int[] nums, int target) {
        
        int s=0;
        int e=nums.length-1;
        int n=nums.length;
        int val=0;
        if(nums[0]==target)return 0;
        if(nums[n-1]==target)return n-1;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(nums[mid]>=nums[s]){
                if(nums[s]<=target && nums[mid]>=target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else if(nums[mid]<=nums[e]){
                 if(nums[mid]<=target && nums[e]>=target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
}