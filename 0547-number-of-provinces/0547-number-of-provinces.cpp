class Solution {
public:
    
    void dfs(int node,vector<int>&vis , vector<int>adj[]){
        
        vis[node]=1;
        
        for(auto it : adj[node]){
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<int>adj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j ){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
            // for(int i=0;i<V;i++){
            //     cout<<i<<"->";
            //     for(auto it : adj[i]){
            //         cout<<it;
            //     }
            //     cout<<endl;
            // }
        vector<int>vis(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                cnt++;
            }
        }
            
        return cnt;
    }
};