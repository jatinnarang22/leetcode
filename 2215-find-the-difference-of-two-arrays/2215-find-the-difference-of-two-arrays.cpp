class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& num1, vector<int>& num2) {
        set<int>m1,m2;
        
        for(auto it:num1){
            m1.insert(it);
        }
        for(auto it:num2){
            m2.insert(it);
        }
        vector<int>nums1,nums2;
        for(auto it:m1){
            nums1.push_back(it);
        }
           for(auto it:m2){
            nums2.push_back(it);
        }
        vector<int>v1,v2;
        vector<vector<int>>ans;
        for(int i=0;i<nums1.size();i++){
            if(m2.find(nums1[i])!=m2.end()){
                
            }else   v1.push_back(nums1[i]);
        }
          for(int i=0;i<nums2.size();i++){
            if(m1.find(nums2[i])!=m1.end()){
                }
            else   v2.push_back(nums2[i]);
        }
        // set<int>check,check1;
        // for(int i=0;i<v1.size();i++){
        //     check.insert(v1[i]);
        // }
        // for(int i=0;i<v2.size();i++){
        //     check.insert(v2[i]);
        // }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};