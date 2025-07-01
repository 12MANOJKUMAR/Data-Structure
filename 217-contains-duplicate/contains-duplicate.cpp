class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
       int n=nums.size();
        set<int> st;
       for(int i=0;i<n;i++){
       st.insert(nums[i]);
       }
       if(st.size()==nums.size()) return false;
       else return true;
        
    }
};