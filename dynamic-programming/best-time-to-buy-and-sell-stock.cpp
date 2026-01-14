class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {   
        int ans = 0;
        unordered_set<int> hash;
        int i = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[i] < prices[j])
                {
                    ans = max(ans, prices[j] - prices[i]);
                    hash.insert(prices[j] - prices[i]);
                }
            }
        }
        return ans;
    }
};