class Solution {
public:
    void reverseString(vector<char>& s) {
        string helper;
        for(int i=0;i<s.size();i++){
            helper+=s[i];
        }
        int j=0;
        for(int i=helper.size()-1;i>=0;i--){
            // cout<<helper[0];
            s[j]=helper[i];
            j++;
        }
    }
};