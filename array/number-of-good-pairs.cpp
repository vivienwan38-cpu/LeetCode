class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int i, j;
        int counter = 0;
        for (i = 0; i < nums.size() - 1; i++)
            for (j = 1; j < nums.size(); j++)
                if (i < j)
                    if (nums[i] == nums[j])
                        counter++;
        return counter;
    }
};