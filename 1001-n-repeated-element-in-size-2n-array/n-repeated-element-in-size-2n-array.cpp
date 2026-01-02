class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m = nums.size();
        unordered_map<int, int>mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        
        for(auto  it :mpp){
            if(it.second ==m/2) return it.first;
        }
        return -1;
    }
};