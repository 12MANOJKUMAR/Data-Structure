class Solution {
public:
    bool checkPerfectNumber(int num) {
         if (num <= 1) return false;
        int ans=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                int d1=i;
                int d2=num/i;
                if(d1==d2){
                    ans+=d1;
                }
                else {
                    ans+=(d1+d2);
                }
            }
            if(ans>num) return false;
        }
        cout<<ans<<" "<<num<<endl;
        return ans==num;
    }
};