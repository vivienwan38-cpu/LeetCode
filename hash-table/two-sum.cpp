class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int size = nums.size();
        for (int i = 0; i < size; i++){
            int x = target - nums[i];
            auto it = hash.find(x);
            if (hash.end() != it)
                return {i, it->second};
            hash[nums[i]] = i;
        }
        return {};
    }
};