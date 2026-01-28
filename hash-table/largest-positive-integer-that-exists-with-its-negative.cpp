class Solution {
public:
    int findMaxK(vector<int>& nums) {
        ranges::sort(nums);
        for (int i = 0, j = nums.size() - 1; j > i; j--)
        {
            while (i < j && nums[i] < -nums[j])
                i++;
            if (nums[i] == -nums[j])
                return nums[j];
        }
        return -1;
    }
};