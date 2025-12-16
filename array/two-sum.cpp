// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         for (int i = 0; i < nums.size() - 1; i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (target == nums[i] + nums[j])
//                     return {i, j};
//             }
//         }
//         return {};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]] = i; //hash返回索引
        }

        for (int j = 0; j < nums.size(); j++)
        {
            int n = target - nums[j];

            if (hash.find(n) != hash.end() && hash[n] != j)
                return {j, hash[n]};
        }
        return {};
    }
};