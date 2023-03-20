class Solution {
public:
    bool isplanted(vector<int>& flowerbed,int n){
        for(int i=0;i<flowerbed.size();i++){
            
        }
        return false;
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     if(flowerbed.size()==1){
         if(flowerbed[0]==0 && n==1)return true;
     }
        int cnt=0;
        for(int i=0;i<flowerbed.size();i++){
            if(n==0)return true;
            if(flowerbed[i]==0){
                if((i==0 || flowerbed[i-1]==0 )&& (i==flowerbed.size()-1 ||flowerbed[i+1]==0)){ cout<<i;flowerbed[i]=1;cnt++;}
            }
        }
        if(cnt>=n)return true;
        return false;
    }
};