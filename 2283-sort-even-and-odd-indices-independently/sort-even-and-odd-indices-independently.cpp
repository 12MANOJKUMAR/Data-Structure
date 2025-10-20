class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even, odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        vector<int>ans;
        int l=0,r=0;
        while(l<even.size() && r<odd.size()){
            ans.push_back(even[l++]);
            ans.push_back(odd[r++]);
        }

        if(l<even.size()) {
            while(l<even.size()) ans.push_back(even[l++]);
        }
        if(r<odd.size()) {
            while(r<odd.size()) ans.push_back(odd[r++]);
        }

        return ans;
    }
};