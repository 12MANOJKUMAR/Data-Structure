class Solution {
public:bool check(const long long &mid, vector<int>&nums ,int th){
       long long ans=0;
        for(auto it: nums){
            ans+=ceil(it/(double)mid);
        }
        return ans<=th;
    }
  int smallestDivisor(vector<int>& nums, int threshold) {
        // set invarient 
        long long low=0, high=1e12;
        while(high>low+1){
            long long mid = low+(high-low)/2;
            // check condition
            if(check(mid,nums,threshold)){
                high = mid;
            }
            else {
                low=mid;
            }
        
        }
        return high;
    
  
        
    }
};