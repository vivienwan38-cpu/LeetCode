class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int ans = -1;
        int lo = nums[0];
        for (auto n : nums)
        {
            lo = min(lo, n);
            ans = max(ans, n - lo);
        }
        return ((ans == 0) ? -1 : ans);
    }
};