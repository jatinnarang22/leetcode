//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    void f(vector<int>arr,int n,vector<int>&ans,int index,int sum){
        if(index==n){
            ans.push_back(sum);
            return;
        }
        f(arr,n,ans,index+1,sum);
        f(arr,n,ans,index+1,sum+arr[index]);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        int index=0;
        int sum=0;
        f(arr,N,ans,index,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends