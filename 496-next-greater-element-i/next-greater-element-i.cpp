class Solution {
public:   
    // First question to link github 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mpp;
        for(int i=nums2.size()-1;i>=0;i--){
            int ele = nums2[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            if(st.empty()){
             mpp[ele]=-1;
            }
            else mpp[ele]=st.top();
            st.push(ele);
        }
    vector<int> ans;
        for(int n:nums1){
        ans.push_back(mpp[n]);
        }

        return ans;
    }
};