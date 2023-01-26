class Solution {
    public int alternateDigitSum(int n) {
     
        int s=0,c=0,count=0;
        
        while(n>0){
            int h=n%10;
            if(count%2==0){
                s+=h;
            }
            else c+=h;
            count++;
            n=n/10;
        }
        int ans=0;
        if(count%2==0)ans=c-s;
        else ans=s-c;
        
        return ans;
    }
}