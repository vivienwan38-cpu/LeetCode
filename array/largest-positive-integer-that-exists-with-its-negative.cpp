class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while (j > 0 && nums[j] > 0) //j要注意边界 & 找正数
        {
            while (i < j && nums[i] < -nums[j])
                i++;
            if (nums[i] == -nums[j])
                return abs(nums[i]);
            j--;
        }
        return -1;
    }
};
// nums = [-2, -1, 0, 2, 3] //跳过i++直接j--
// nums = [-3, -1, 0, 2, 3] //直接第二个if返回ans
// nums = [-7, -1, 0, 1, 6] //i++然后j--然后找到了