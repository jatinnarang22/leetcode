class Solution {
public:
    string getHint(string secret, string guess) {
        string ans;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        int bulls=0;
        int cows=0;
        vector<int>v;
        for(int i=0;i<secret.size();i++){
          
            if(secret[i]==guess[i])
            {
                bulls++;
                // guess[i]='-1';
                // m1[secret[i]]=1;
            } 
            else{
                  m1[secret[i]]++;
                v.push_back(guess[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            if(m1.find(v[i])!=m1.end()){
                if(m1[v[i]]!=0){
                cows++;
                    m1[v[i]]--;
                }
                    
                // cout<<s[guess[i]];
            }
        }
        // ans+='A'+'B';
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};