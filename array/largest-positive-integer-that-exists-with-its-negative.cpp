class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        unordered_set<int> hash;
        int ans = -1;
        for (auto n : nums)
        {
            if (hash.count(-n))
                ans = max(ans, abs(n));
            hash.insert(n);
        }
        return ans;
    }
};