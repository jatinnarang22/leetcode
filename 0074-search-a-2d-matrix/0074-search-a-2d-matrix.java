class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
		int m=matrix[0].length;
		
		int l=0;
		int u=m*n-1;
        // System.out.print(u);
		while(l<=u){
			int mid=(l+u)/2;
			int i=mid/m;
			int j=mid%m;
			System.out.print(" "+i+" "+j);
			if(matrix[i][j]==target){
				return true;
			}
			else if(matrix[i][j]>target){
				u=mid-1;
			}
			else{
				l=mid+1;
			}
			
		}
        return false;
    }
}