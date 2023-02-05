class Solution {
public:
    bool if_vowal(char i,char j){
        if((i=='a' || i=='e' || i=='i' || i=='o' || i=='u')&&(j=='a' || j=='e' || j=='i' || j=='o' || j=='u'))return true;
           return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>v(words.size());
        int i=0;
        for(auto it:words){
            if(if_vowal(it[0],it.back()))v[i]=1;
            else v[i]=0;
            i++;
        }
        //prefixsum
        vector<int>an,ans;
        an.push_back(0);
        for(auto it: v){
            an.push_back(an.back()+it);
        }
        // for(auto it : an){
        //     cout<<it;
        // }
        for(auto it:queries){
            ans.push_back(an[it[1]+1]-an[it[0]]);
        }
        
        
        return ans;
    }
};