class Solution {
public:
    string reverseStr(string s, int k) {
     
        // if(s.size()<k){
        //     return reverse(s.begin(),s.end());
        // }
        int n=s.size();
          if(k>n)
        { 
            reverse(s.begin(),s.end());
            return s;
        }
        int j=0;
        string ans;
        for(int i=0;i<s.size();i+=2*k){
            string temp=s.substr(i,k);
            // cout<<temp;
            reverse(temp.begin(),temp.end());
            cout<<temp<< " ";
            ans+=temp;
            j+=k;
            while(j < n && j<i+2*k){
                ans.push_back(s[j]);
                j++;
            }
        }
        return ans;
    }
};