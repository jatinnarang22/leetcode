class Solution {
public:
    bool dfs(int node, int nodecolor,vector<vector<int>>&adj,vector<int>&color){
        color[node]=nodecolor;
        for(auto & neighbor:adj[node]){
            if(color[neighbor]==color[node])return false;
            
            if(color[neighbor]==-1){
                if (!dfs(neighbor, 1 - color[node], adj, color)) return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> adj(n + 1);

            for(auto& it : dislikes){
                adj[it[0]].push_back(it[1]);
                adj[it[1]].push_back(it[0]);
            }
        
        vector<int>color(n+1,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!dfs(i,0,adj,color))return false;
            }
        }
        return true;
    }
};