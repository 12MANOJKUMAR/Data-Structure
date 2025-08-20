class Solution {
public:
 
    // helper function to convert the integer into the enlish word;
    string belowten[10]={""," One"," Two"," Three"," Four", " Five"," Six", " Seven", " Eight", " Nine"};
    string belowtwenty[11]={"", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen"};
    string twodigit[11]={"",""," Twenty"," Thirty", " Forty"," Fifty"," Sixty", " Seventy", " Eighty"," Ninety"};
    string special[4]={"", " Thousand", " Million", " Billion"};

    string helper( const int &num){
        if(num<10) return belowten[num];
        else if(num<20) return belowtwenty[num-9];
        else if(num<100) return twodigit[num/10]+helper(num%10);
        else if(num<1000) return helper(num/100)+" Hundred"+ helper(num%100);
        return "";
        }
 

    string numberToWords(int num) {
        if(num==0) return "Zero";
        string ans="";
        int idx=0;
        
        while(num>0){
            int chunk = num%1000;
            if(chunk!=0){
                string words = helper(chunk)+special[idx];
                ans= words+ans; // prepend into answer...
            }
            num/=1000;
            idx++;
        }

        return ans.substr(1);
    }
};