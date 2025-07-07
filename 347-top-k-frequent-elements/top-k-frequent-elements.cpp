class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        vector<pair<int,int>>v(mpp.begin(),mpp.end());
        sort(v.begin(), v.end(),[](const auto & a, const auto & b){
            return a.second>b.second;
        });

        for(auto it: v){
        if(k){ ans.push_back(it.first);
        k--;
        }
        }
        return ans;
      
    }
};