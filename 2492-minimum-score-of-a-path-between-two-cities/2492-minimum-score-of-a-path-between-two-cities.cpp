class Solution {
public:
    
    int bfs(int n,vector<vector<pair<int,int>>>&adj){
        vector<bool>vis(n+1);
        
        queue<int>q;
        q.push(1);
        vis[1]=true;
        int ans=INT_MAX;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto val:adj[temp]){
                ans=min(ans,val.second);
                if(!vis[val.first]){
                    vis[val.first]=true;
                    q.push(val.first);
                }
            }
        }
        return ans;
    }
        
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int,int>>>adj(n+1);
        
        for(auto road:roads){
            adj[road[0]].push_back({road[1],road[2]});
            adj[road[1]].push_back({road[0],road[2]});
        }
        
        return bfs(n,adj);
    }
};