class Solution {
public:
    string intToRoman(int num) {
        string once[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hun[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thus[]={"","M","MM","MMM"};
        // cout<<((num/1000)/100)/10;
        return thus[num/1000]+hun[(num%1000)/100]+tens[((num%1000)%100)/10]+once[num%10];
        
    }
};