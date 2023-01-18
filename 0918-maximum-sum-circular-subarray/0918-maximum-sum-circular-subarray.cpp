class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
//         array sum  = total
//         max array sum  =first multiply with -1 then sum the max sub array
//         orignal max array sum  is our final ans
        int sum=0;
        int maxsum=0;
        int total=0;
        vector<int>nums1;
        for(int i=0;i<n;i++){
            nums1.push_back(-nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums1[i]>0){
                sum+=nums1[i];
                // cout<<sum;
            }
            else{
                if(maxsum<sum)maxsum=sum;
                sum+=nums1[i];
                if(sum<0)sum=0;
            }
            
                total+=nums1[i];
        }
        cout<<total;
//         kedance algorithm
        int sum1=0;
        int maxsum1=0;
        for(int i=0;i<n;i++){
            // cout<<n;
               // cout<<nums[i];
            if(nums[i]>0){
               sum1+=nums[i]; 
             
            }
            else{
                 if(maxsum1<sum1)maxsum1=sum1;
                // cout<<sum1;
                sum1+=nums[i];
                if(sum1<0)sum1=0;
                
            }
        }
         // cout<<maxsum1;
        sum=max(sum,maxsum);
        int ans=-(total-sum);
        cout<<maxsum1;
        int ans1=max(maxsum1,ans);
        ans1=max(ans,ans1);
        
        int count=0;
        int h=INT_MAX;
		for(int i=0;i<n;i++){
			if(nums1[i]>0){
				count++;
			}
			// cout<<h;
			h=min(h,nums1[i]);
		}
        // cout<<count<<n;
        if(count==n){
			return -h;
		}else
        return ans1;
        
       return 0; 
    }
};