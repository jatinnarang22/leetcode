class Solution {
public:
    
   bool dfs(int node, vector<int>&color, vector<int> adj[] ,int col) {
        color[node] = col; 
        
        // traverse adjacent nodes
        for(auto it : adj[node]) {
            // if uncoloured
            if(color[it] == -1) {
                if(dfs(it, color, adj, !col) == false) return false; 
            }
            // if previously coloured and have the same colour
            else if(color[it] == col) {
                return false; 
            }
        }
        
        return true; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int>adj[n];
      for(int i=0;i<graph.size();i++){
          for(auto it:graph[i]){
              adj[i].push_back(it);
          }
      }
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                if(dfs(i,vis,adj,0)==false)return false;
            }
        }
            
            return true;
    }
};