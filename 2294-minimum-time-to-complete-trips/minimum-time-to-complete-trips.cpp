class Solution {
public:
    bool check(long long mid,vector<int>& time, int totalTrips){
        long long ans=0;
        for(auto it: time){
            ans+=mid/it;
        }
    return ans>=totalTrips;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long low,high;
       low=0;
       high=1e14;
    //  there are two varient low and high 
    //  low --> false (zero trip -->not possible )
    //  high --> true (more than sufficient )
       while(high>low+1){
      long long mid =low+(high-low)/2;
        if(check(mid,time,totalTrips)){
            high=mid;
        }
        else {
            low=mid;
        }
       } 
       return high;
    }
};