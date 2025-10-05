class Solution {
public:
   static bool cmp(const pair<int,int> &a, const pair<int,int> &b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> ans;
       unordered_map<int,int> mpp;
       for(auto it : nums){
        mpp[it]++;
       }
       vector<pair<int, int>>v(mpp.begin(),mpp.end());
       sort(v.begin(), v.end(),cmp);

       for(int i=0;i<k;i++){
         {
            ans.push_back(v[i].first);
            
        }
       }
       return ans;
        
    }
};