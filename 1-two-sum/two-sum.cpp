class Solution {
public:
    // static bool cmp(auto & c1, auto & c2){
    //     return c1.first>c2.first;
    // }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(), v.end());

        int l=0,r=nums.size()-1;
        while(r>l){
            int sum = v[l].first+v[r].first;
            if(sum==target)  return {v[l].second, v[r].second};
            else if(sum>target) r--;
            else l++;
        }

        return {};

        
    }
};