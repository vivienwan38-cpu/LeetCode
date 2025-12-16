class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0) 
            return false;

        long reversed = 0;
        int original = x;

        while (x > 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        return original == reversed;
    }
};
/*
x   r   d   r
121 0   1   1 = 0 + 1
12  1   2   12 = 10 + 2
1   12  1   121 = 120 + 1
*/