class Solution {
public:
    long long bfs(int i,vector<vector<int>>&adj,int n,vector<int>&vis){
        queue<int>q;
        q.push(i);
        long long val=1;
         vis[i] = 1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto ad : adj[temp]){
                if(vis[ad]!=1){
                    vis[ad]=1;
                    val++;
                    q.push(ad);
                }
            }
        }
        return val;
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
         vector<int>vis(n,0);
        long long cnt=0;
        long long rem=n;
        for(int i=0;i<n;i++){
            if(!vis[i]){
               int size = bfs(i,adj,n,vis);
            cnt+= size*(rem-size);
            rem-=size;
            }
        }
        return cnt;
    }
};