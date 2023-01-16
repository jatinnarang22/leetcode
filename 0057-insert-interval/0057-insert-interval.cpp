class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& n) {
       v.push_back(n); 
 sort(v.begin(),v.end());
        vector<vector<int>>ans;
        ans.push_back(v[0]);
        int first=ans[0][0];
        int last=ans[0][1];
        int k=0;
        for(int i=0;i<v.size();i++){
             if(v[i][0]<=last){
                ans[k][0]=min(first,v[i][0]);
                ans[k][1]=max(last,v[i][1]);
            }
            else{
                vector<int>temp;
                temp.push_back(v[i][0]);
                temp.push_back(v[i][1]);
                ans.push_back(temp);
                k++;
            }
            first=ans[k][0];
                last=ans[k][1];
        }
        return ans;
    }
};