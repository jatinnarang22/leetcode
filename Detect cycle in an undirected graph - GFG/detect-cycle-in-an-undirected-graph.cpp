//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
bool bfs(int src,vector<bool> &visited,vector<int> graph[],int V){
        
        queue<pair<int,int>> qu;
        
        qu.push({src,-1});
        visited[src] = true;
        // source and its parent.
        while(qu.empty() == false){
            auto top = qu.front();
            qu.pop();
            
            for(auto nbr : graph[top.first]){
                if( nbr != top.second){ // nbr should not be the parent 
                    if(visited[nbr])return false; // if it is connecting to back to some node which is visited mean 
                    // it has a cycle
                    
                    else {
                        qu.push({nbr,top.first});
                        visited[nbr] =true;
                    }
                }
            }
            
        }
        
        return  true;
        
    }
    bool isCycle(int V, vector<int> adj[]) {
       
       vector<bool> visited(V,false);
       
       for(int i = 0; i < V; i++){
           if(!visited[i] && !bfs(i,visited,adj,V)){
            //   cout<<i<<" ";
               return 1;
           }
       }
       
       return 0;
       
       
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends