class Solution {
 
     public static void reverse(int[] nums, int l, int r){
           
      //      System.out.print(nums[r]);
      //      int min=nums[l+1]-nums[l];
           int flag=0;
           for(int i=l+1;i<=r;i++){
                 if(nums[l]>=nums[i]){
                     System.out.print(l+" "+i);
                       flag=1;
                       swap(nums,l,i-1);
                     break;
                 }
           }
           if(flag==0){
                 swap(nums,l,r);
           }
      //      System.out.print(l+1+" "+nums[r]);
           Arrays.sort(nums,l+1,r+1);
    }
    public static void swap(int [] nums,int l,int r){
      //     System.out.print(l+" "+r);
          int temp=nums[l];
          nums[l]=nums[r];
          nums[r]=temp;
    }
    public static void nextPermutation(int[] nums) {
          int n=nums.length;
      //     System.out.print(n);
      int flag=0;
          for(int i=n-1;i>0;i--){
                if(nums[i]>nums[i-1]){
                      flag=1;
                      reverse(nums,i-1,n-1);
                      break;
                }
          }
          if(flag==0)Arrays.sort(nums);
    }

    
}