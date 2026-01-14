class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int counter = 0;
        unordered_map<int,int>hash;
        for (auto n : nums)
        {
            counter += hash[n];
            hash[n]++;
        }
        return counter;
    }
};