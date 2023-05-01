class Solution {
public:
    double average(vector<int>& salary) {
        
        sort(salary.begin(),salary.end());
        int n=salary.size();
        int ans=0;
        int cnt=0;
        for(int i=1;i<n-1;i++){
            ans+=salary[i];
            cnt++;
        }
        return double(double(ans)/double(cnt));
        
    }
};