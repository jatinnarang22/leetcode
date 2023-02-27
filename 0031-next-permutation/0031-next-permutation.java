class Solution {
    public void nextPermutation(int[] nums) {
        
        int n=nums.length;
        int i=n-1,flag=0;
        for(;i>0;i--){
            if(nums[i]>nums[i-1]){
                sol(i-1,nums,n);
                    flag=1;
                break;
            }
        }
        if(flag==0){
           reverse(nums,0,n-1);
        }
    }
    public void sol(int k,int[] nums,int n){
        int i = k+1;
        while(i < n && nums[i] > nums[k]) i++;
        swap(nums, i-1, k);
        reverse(nums, k+1, n-1);
//         //now check closest no
//         int mi=nums[k+1]-nums[k];
//         // System.out.print(nums[k]);
//         int pos=k+1;
//         for(int i=k+1;i<n;i++){
//             int h=nums[i]-nums[k];
//              // System.out.print(nums[k]);
//             // if(h<0)h=-h;
                
//             if(mi>h && h != 0){
//                 mi=h;
//                 pos=i;
                 
//             }
//         }
//        System.out.print(pos);
//         swap(nums,pos,k);
//         reverse(nums,k+1,n-1);
    }
    public void reverse(int[] nums,int k,int n){
      while(k<n){
          swap(nums,k,n);
          k++;
          n--;
      }  
    }
    public void swap(int[]nums,int pos,int k){
        int temp=nums[k];
        nums[k]=nums[pos];
        nums[pos]=temp;
    }
    
}