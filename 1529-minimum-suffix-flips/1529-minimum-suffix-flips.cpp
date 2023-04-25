class Solution {
public:
    int minFlips(string target) {
        int state=0,cnt=0;
        for(int i=0;i<target.size();i++){
            if(target[i]-'0'!=state)
            {cnt++;
             if(state==1)state=0;
             else state=1;
            }
        }
        
        return cnt;
    }
};