class Solution {
    public int maxSatisfaction(int[] satisfaction) {
        
        Arrays.sort(satisfaction);
        reverse(satisfaction);
        int n=satisfaction.length;
        int ans=0;
        int c=-1;
        for(int i=n;i>0;i--){
            int val=0;
            int h=i;
            c++;
            for(int j=0;j<n-c;j++){
                
                val+=satisfaction[j]*h;
                
            // System.out.print(val);
                h--;
            }
            
            System.out.print(val+" ");
            ans=Math.max(ans,val);
        }
        return ans;
    }
     public static void reverse(int[] array)
    {
 
        // Length of the array
        int n = array.length;
 
        // Swapping the first half elements with last half
        // elements)
        for (int i = 0; i < n / 2; i++) {
 
            // Storing the first half elements temporarily
            int temp = array[i];
 
            // Assigning the first half to the last half
            array[i] = array[n - i - 1];
 
            // Assigning the last half to the first half
            array[n - i - 1] = temp;
        }
    }
}