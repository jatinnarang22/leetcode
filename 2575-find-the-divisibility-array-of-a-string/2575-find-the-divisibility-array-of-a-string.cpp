class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        long long int val=0;

        vector<int>ans;
        for(int i=0;i<word.size();i++){
            val=val*10+(word[i]-'0');
            // int v=0;
            if( val%m==0){
                ans.push_back(1);
            }
            else{
                // v=val%m;
                   ans.push_back(0);
            }
         
            val%=m;
         
        }

        return ans;
    }
};