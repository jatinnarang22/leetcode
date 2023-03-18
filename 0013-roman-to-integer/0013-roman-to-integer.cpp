class Solution {
public:
    int romanToInt(string nums) {
        
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        // int val1=m[nums[0]];
        // int val2=0;
        int sum=0;
        // for(int i=1;i<nums.length();i++){
        //     if(val1<m[nums[i]]){
        //         sum+=m[nums[i]]+val1;
        //     }
        //     else if(val1>m[nums[i]]){
        //         sum+=val1;
        //         i--;
        //     }
        // }
        // return sum;
        
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]<m[nums[i+1]]) sum-=m[nums[i]];
            else    sum+=m[nums[i]];
        }
        
        return sum;
    }
};