class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans;
        int min_num = nums[0];
        for (auto n : nums){
            ans = max(ans, n - min_num);
            min_num = min(min_num, n);
        }
        if (ans == 0) return -1;
        return ans;
    }
};