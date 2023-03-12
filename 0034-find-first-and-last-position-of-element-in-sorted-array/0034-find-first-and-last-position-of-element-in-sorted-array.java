class Solution {
    public int[] searchRange(int[] nums, int target) {
         int l=0;
      
        int r=nums.length-1;
        // System.out.print(r);
        int arr[]=new int[2];
        arr[0]=-1;
        arr[1]=-1;
        // int arr1[]=new int[1];
         if(nums.length==0)return arr;
        while(l<=r){
            int mid=(l+r)/2;
            // System.out.print(mid);
            if(nums[mid]==target){
                int val=mid;
                while(mid>=l && nums[mid]>=target){
                    mid--;
                }
                arr[0]=mid+1;
                while( val<=r && nums[val]<=target )val++;
                arr[1]=val-1;
                break;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return arr;
    }
}