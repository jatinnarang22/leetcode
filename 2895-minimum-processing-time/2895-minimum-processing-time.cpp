class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end(),greater());
        sort(tasks.begin(),tasks.end());
        int val=1;
        int j=0;
        int ans=INT_MIN;
        for(int i=0;i<tasks.size();i++){
            if(val>4){
                j++;
                val=1;
            }
            cout<<processorTime[j]+tasks[i]<<" ";
            ans=max(ans,processorTime[j]+tasks[i]);
            val++;
            
        }
        
        return ans;
    }
};