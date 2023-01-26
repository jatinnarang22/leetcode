class Solution {
public:
    int alternateDigitSum(int n) {
        
        int ans=0;
        int i=0;
        int h=0;
        while(n>0){
         h=h*10+n%10;
            n=n/10;
        }
        int k=0;
        while(h>0){
            int g=h%10;
            if(k%2==0){
                ans+=g;
            }
            else{
                ans-=g;
            }
            k++;
            h=h/10;
        }
        
        return ans;
    }
};