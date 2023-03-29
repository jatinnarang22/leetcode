class Solution {
    public int maxSatisfaction(int[] satisfaction) {
        
        Arrays.sort(satisfaction);
        // reverse(satisfaction);
        // for(int i=0;i<satisfaction.length;i++)System.out.print(satisfaction[i]);
        
        int n=satisfaction.length;
        int[][] dp =new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=-1;
            }
        }
        return f(satisfaction,0,0,dp);
    }
    public static int f(int[] satisfaction,int index,int temp,int[][] dp){
        if(index == satisfaction.length){
            return 0;
        }
        if(dp[index][temp]!=-1){
            return dp[index][temp];
        }
        // System.out.print(satisfaction[index]);
        int taken =satisfaction[index]*(temp+1)+f(satisfaction,index+1,temp+1,dp);
        int nottaken=0+f(satisfaction,index+1,temp,dp);
        // System.out.print(taken);
        return  dp[index][temp]=Math.max(taken,nottaken);
    }
}
//     public static void reverse(int[] array){
// // Length of the array
//         int n = array.length;
 
//         // Swapping the first half elements with last half
//         // elements)
//         for (int i = 0; i < n / 2; i++) {
 
//             // Storing the first half elements temporarily
//             int temp = array[i];
 
//             // Assigning the first half to the last half
//             array[i] = array[n - i - 1];
 
//             // Assigning the last half to the first half
//             array[n - i - 1] = temp;
//         }
//     }
// }