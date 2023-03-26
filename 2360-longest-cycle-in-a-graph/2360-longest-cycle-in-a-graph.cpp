class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>vis(n,0);
        vector<int>in(n);
        
        //inorered of element ;
        for(auto edge:edges){
            if (edge != -1) {
                in[edge]++;
            }
        }
        
        //khan algorithm
        queue<int> q;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            vis[node]=1;
            int child=edges[node];
            if(child!=-1){
                in[child]--;
                if(in[child]==0){
                    q.push(child);
                }
            }
        }
        // -----------------------
        
        int ans=-1;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int node=i;
                vis[node]=1;
                int child=edges[node];
                int cnt=1;
                while(child!=node){
                      vis[child]=1;
                    cnt++;
                    child=edges[child];
                }
                 ans=max(ans,cnt);
            }
           
        }
        return ans;
    }
};