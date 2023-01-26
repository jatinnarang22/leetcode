class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
     
               priority_queue<pair<int,int>>q;
        for(int i=0;i<score.size();i++){
            q.push({score[i][k],i});
        }
        vector<vector<int>>ans;
        for(int i=0;i<score.size();i++){
            auto x = q.top();
            q.pop();
            ans.push_back(score[x.second]);
        }
            
            return ans;
    }
};