class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    long long total = 0;
    int left = 0;
    int result = 0;
    int n=nums.size();
    int right=0;

     while(right < n){
        total += nums[right];

        // Cost to make all elements in window equal to nums[right]
        while ((long long)nums[right] * (right - left + 1) - total > k) {
            total -= nums[left];
            left++;
        }

        result = max(result, right - left + 1);

        right ++;
    }

    return result;
}

};