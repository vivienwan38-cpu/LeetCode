class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> hash;
        int counter = 0;
        for (int n : nums) {
            counter += hash[n];
            hash[n]++;
        }
        return counter;
    }
};