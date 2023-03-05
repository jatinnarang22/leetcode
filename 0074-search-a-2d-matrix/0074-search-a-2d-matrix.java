class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
        int m=matrix[0].length;
        // System.out.print(n);
        if(n==1 && m==1 && matrix[0][0]==target)return true;
        for(int i=0;i<n;i++){
            if(target>matrix[i][m-1]){
                // System.out.print(matrix[i][m-1]);
                continue;
            }
            for(int j=m-1;j>=0;j--){
                // System.out.print(matrix[i][j]);
                if(matrix[i][j]==target)return true;
            }
        }
        return false;
    }
}