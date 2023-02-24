class NumArray {
    int arr[];
    public NumArray(int[] nums) {
        int sum=0;
        arr=new int[nums.length];
    for(int i=0;i<nums.length;i++){
        arr[i]=sum+nums[i];
        sum+=nums[i];
        }
    }
    
    public int sumRange(int left, int right) {
        if(left==0)return arr[right];
        return arr[right]-(arr[left-1]);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */