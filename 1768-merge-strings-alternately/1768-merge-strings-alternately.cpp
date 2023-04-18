class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=word1.size(), j=word2.size();
        int x=0,y=0;
        while(x<i && y<j){
            ans.push_back(word1[x++]);
            ans.push_back(word2[y++]);
        }
        
        while(x<i){
            ans.push_back(word1[x++]);
        }
        while(y<j){
            ans.push_back(word2[y++]);
        }

        return ans;
    }
};