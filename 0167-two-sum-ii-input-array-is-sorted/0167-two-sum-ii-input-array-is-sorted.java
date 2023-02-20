class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n=numbers.length-1;
        int i=0;
        int arr[]=new int[2];
        while(i<n){
            if(numbers[i]+numbers[n]>target){
                n--;
            }
            else if(numbers[i]+numbers[n]<target){
                i++;
            }
            else{
                arr[0]=i+1;
                arr[1]=n+1;
                break;
            }
        }
        return arr;
    }
}