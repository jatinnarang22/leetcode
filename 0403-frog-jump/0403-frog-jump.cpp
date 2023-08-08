class Solution {
public:
    bool fun(vector<int>& stones, int k, int n, unordered_map<int, set<int>>& m) {
        for (int i = 0; i < n; i++) {
            int curstone = stones[i];
            // cout<<i;
            set<int> s ;
            for(auto k:m[curstone])s.insert(k);
            // for(auto u:s)cout<<u;
            for (int jump : s) {
                int pos = curstone + jump;
                // cout<<pos;
                if (pos == stones[n - 1]) return true;

                if (m.find(pos)!=m.end()) {
                    cout<<pos<<" ";
                    if(jump-1>=0){
                    m[pos].insert(jump - 1);
                    }
                    m[pos].insert(jump);
                    m[pos].insert(jump + 1);
                    // cout<<pos;
                }
            }
        }
        return false;
    }

    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int, set<int>> m;
        for(int i=0;i<stones.size();i++)
        m[stones[i]];
        
        m[stones[0]].insert(1);
//         for(auto it:m){
//             cout<<it.first;
//         }
        
        return fun(stones, 1, n, m);
    }
};
