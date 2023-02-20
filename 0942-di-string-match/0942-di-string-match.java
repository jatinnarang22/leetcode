class Solution {
    public int[] diStringMatch(String s) {
        int n=s.length();
        int v=n;
        int k=0;
        int[] arr;
        arr = new int[n+1];
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='I'){
                arr[i]=k;
                k++;
            }
            else{
                arr[i]=v--;
            }
        }
        if(s.charAt(n-1)=='I'){
           arr[n]=k; 
        }
        else {
           arr[n]=v; 
        }
        return arr;
    }
}