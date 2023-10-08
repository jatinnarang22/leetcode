class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end(),greater());
        int val=0;
        int j=0;
        int ans=INT_MIN;
        for(int i=0;i<tasks.size();){
            
            cout<<processorTime[j]+tasks[i]<<" ";
            ans=max(ans,processorTime[j]+tasks[i]);
            i+=4;
            j++;
            
        }
        
        return ans;
    }
};