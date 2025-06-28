class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>>v;
        for(int i =0;i<nums.size();i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end(), greater<>());
        vector<int>index;
        for(int i=0;i<k;i++){
            index.push_back(v[i].second);

        }
        sort(index.begin(),index.end());
        vector<int>ans;
        for(int i=0;i<index.size();i++){
            ans.push_back(nums[index[i]]);
        }
      return ans;

    }
};