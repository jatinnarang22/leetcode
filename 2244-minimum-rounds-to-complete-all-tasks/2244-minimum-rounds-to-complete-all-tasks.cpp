class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;

        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
        }
        int cnt=0;
        // for(auto it:m){
        //      cout<<it.second<<endl;
        // }
        for(auto it :m){
            if(it.second==1)return -1;
           int h= it.second%3;
           if(h==0){
               cnt+=it.second/3;
           }
           else if(h==1){
               cnt+=((it.second-3)/3)+2;

           }
           else if(h==2){
              cnt+= h/2+it.second/3;
           }
        }

        return cnt;
    }
};