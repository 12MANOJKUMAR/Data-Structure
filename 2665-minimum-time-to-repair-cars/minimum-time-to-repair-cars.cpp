class Solution {
public:
    bool check(long long mid, vector<int>&r,int c){
       long long ans=0;
       for(auto it: r){
        ans+=(long long)sqrt(mid / (double)it);
       } 
       return ans>=c;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=0, high = 1e14;
        while(high>low+1){
            
            long long mid = low+(high-low)/2;

            if(check(mid, ranks, cars)){
                high=mid;
            }
            else low=mid;
            // check condition
        }

        return high;
    }
};