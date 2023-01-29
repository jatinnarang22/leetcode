class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<int>node[V];
   

        for(auto it:prerequisites){
            node[it[1]].push_back(it[0]);
        }
        
        int indegree[numCourses];
        for(int i=0;i<V;i++){
            indegree[i]=0;
        }
        
        for(int i=0;i<V;i++){
            for(auto it:node[i]){
                indegree[it]++;
            }
        }
        
        vector<int>v;
        
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int va = q.front();
            q.pop();
            v.push_back(va);
            for(auto it : node[va] ){
               indegree[it]--;
                if(indegree[it] == 0)q.push(it);
            }
        }
        if(v.size()!=V)return {};
        return v;
    }
};