class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int ans = -1;
        int i;
        int n = nums.size();
        for (i = 0; i < n; i++)
        {
            int target = -nums[i];
            if (binary_search(nums.begin(), nums.end(), target))
                ans = max(ans, abs(nums[i]));
        }
        return ans;
    }
};