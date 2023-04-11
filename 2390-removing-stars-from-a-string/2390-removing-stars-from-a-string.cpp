class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
               // cout<< st.top();
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            
        }
        string ans;
        int k=0;
        while(!st.empty()){
            cout<<st.top();
            ans+=st.top();
            st.pop();
            k++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};