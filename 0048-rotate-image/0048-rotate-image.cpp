class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        
        for(int i=0;i<a.size();i++){
            for(int j=i;j<a.size();j++){
                  swap(a[i][j],a[j][i]);
            }
        }
        int n=a.size();
        for(int i=0;i<n;i++){
            int first=0,last=n-1;
            while(first<last){
                swap(a[i][first],a[i][last]);
                first++;
                last--;
            }
        }
    }
};