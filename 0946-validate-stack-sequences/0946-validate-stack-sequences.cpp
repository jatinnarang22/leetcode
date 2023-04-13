class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       stack<int>s;
        int n=pushed.size();
        int j=0;
        for(auto it:pushed){
            s.push(it);
            while(!s.empty() && j<n && s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        return j==n;
    }
};