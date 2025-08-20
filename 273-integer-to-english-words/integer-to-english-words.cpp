class Solution {
public:
 
    // helper function to convert the integer into the enlish word;
    string belowten[10]={""," One"," Two"," Three"," Four", " Five"," Six", " Seven", " Eight", " Nine"};
    string belowtwenty[10]={" Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen"};
    string twodigit[11]={"",""," Twenty"," Thirty", " Forty"," Fifty"," Sixty", " Seventy", " Eighty"," Ninety"};
    string special[4]={"", " Thousand", " Million", " Billion"};

    string helper( const int &num){
        if(num<10) return belowten[num];
        if(num<20) return belowtwenty[num-10];
        if(num<100) return twodigit[num/10]+helper(num%10);
        if(num<1000) return helper(num/100)+" Hundred"+ helper(num%100);

        for(int i=3;i>=0;i--){
            if(num>=pow(1000,i)){
                return helper(num/(int)pow(1000,i))+special[i]+helper(num%(int)pow(1000,i));
            }
            

        }
         return "";
    }
 

    string numberToWords(int num) {
        if(num==0) return "Zero";
        string ans= helper(num).substr(1);
        return ans;
    }
};