class Solution {
public:
    int findMaxK(vector<int>& nums) {
        ranges::sort(nums);
        int i = 0;
        int j = nums.size() - 1;
        while (i < j && nums[j] > 0)
        {
            while (i < j && nums[i] < -nums[j])
                i++;
            if (nums[i] == -nums[j])
                return nums[j];
            j--;
        }
        return -1;
    }
};