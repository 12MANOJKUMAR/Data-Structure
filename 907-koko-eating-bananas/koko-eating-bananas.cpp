class Solution {
public:
    bool check(const long long &mid, vector<int>& p,int h){
       long long ans=0;
        for(auto it: p){
            ans+=ceil(it/(double)mid);
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // set invarient 
        long long low=0, high=1e12;
        while(high>low+1){
            long long mid = low+(high-low)/2;
            // check condition
            if(check(mid,piles,h)){
                high = mid;
            }
            else {
                low=mid;
            }
        
        }
        return high;
    }
};