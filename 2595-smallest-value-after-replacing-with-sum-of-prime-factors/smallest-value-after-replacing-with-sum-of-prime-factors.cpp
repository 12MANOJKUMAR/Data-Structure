class Solution {
public:
  
    int smallestValue(int n) {
         
        while(true){
        int sum=0, original=n;
        for(int i=2;i*i<=n;i++){

            while(n%i==0){
                sum+=i;
                n/=i;
            }
        }
        if(n>1) sum+=n;
        if(sum==original) return sum;
        n=sum;

    
        }
    }
};