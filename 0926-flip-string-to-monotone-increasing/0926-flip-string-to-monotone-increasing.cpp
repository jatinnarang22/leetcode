class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
           int n=s.size();
        int once=count(s.begin(),s.end(),'1');
        int now=0,
        ans=min(once,n-once);
        for(int i=0;i<n;i++){
            if(s[i]=='1')now++;
            
            int curr=now+((n-i-1)-(once-now));
            
            ans=min(curr,ans);
        }
        return ans;
    }
};