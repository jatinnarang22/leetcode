class Solution {
public:
    
    void bfs(int node,vector<vector<int>>&adj,vector<int>&vis){
        queue<int>q;
        q.push(node);
        
        vis[node]=1;
        while(!q.empty()){
            node=q.front();
            q.pop();
            for(auto nab:adj[node]){
                if(!vis[nab]){
                    vis[nab]=1;
                    q.push(nab);
                }
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if (connections.size() < n - 1) {
            return -1;
        }
        
        vector<vector<int>>adj(n);
        for(auto ad:connections){
            adj[ad[0]].push_back(ad[1]);
            adj[ad[1]].push_back(ad[0]);
        }

                vector<int>vis(n+1);
        int ans=0;
        for(int i=0;i<n;i++){
            
            if(vis[i]!=1){
                ans++;
                bfs(i,adj,vis);
            }
        }
        
        return ans-1;
    }
};