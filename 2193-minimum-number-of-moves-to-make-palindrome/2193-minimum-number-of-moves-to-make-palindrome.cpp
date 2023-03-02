class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.length();
        int lb=0;
        int ub=n-1;
        int ans=0;
        // System.out.print(s[0]);
        while(lb<ub){
            int l=lb,r=ub;
            
            while(s[l]!=s[r])r--;
            if(l==r){
                swap(s[r],s[r+1]);
                ans++;
                continue;
            }
            else{
                while(r<ub){
                    swap(s[r],s[r+1]);
                    ans++;
                    r++;
                }
            }
            lb++;ub--;
        }
        return ans; 
    }
};