class Solution {
public:
    void sortColors(vector<int>& nums) {
        int flag;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
             flag = 0;
            for(int j=0;j<n-1-i;j++){
                if(nums[j+1]<nums[j]){
                    swap(nums[j],nums[j+1]);
                    flag++;
                } 
            }
            if(flag==0) break;
        }
        return ;
        
    }
};