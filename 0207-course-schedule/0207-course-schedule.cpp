class Solution {
public:
    
    bool dfs(int i,vector<int>&vis,vector<int>&dfsvis,vector<int>node[]){
        
        vis[i]=1;
        dfsvis[i]=1;
        cout<<i;
        for(auto it:node[i]){
            if(!vis[it]){
                if(dfs(it,vis,dfsvis,node))return true;
            }
            else if(dfsvis[it])return true;
        }
        dfsvis[i]=0;
        return false;
    }
    
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        
        vector<int> dfsvis(V+1,0);
        vector<int> vis(V+1,0);
          vector<int>node[V];
        
        for(auto it: prerequisites){
            node[it[0]].push_back(it[1]);
        }
        for(int i=0;i<V;i++)
        {
            // cout<<i;
            if(!vis[i]){
                if(dfs(i,vis,dfsvis,node))return false;
            }
        }
        return true;
    }
};

