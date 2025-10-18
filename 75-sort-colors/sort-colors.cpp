class Solution {
public:
    void sortColors(vector<int>& nums) {
        // insertion sort
    int n= nums.size();
        for(int i=1;i<n;i++){
            int ele = nums[i];
            int j = i-1;

            while(j>=0 && nums[j]>ele){
                nums[j+1] = nums[j];
                j=j-1;
            }
            nums[j+1]=ele;
        }

        return ;
        
    }
};