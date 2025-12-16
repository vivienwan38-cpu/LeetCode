using namespace std;
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        string s = to_string(x);

        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            if (s[right] != s[left]) 
                return false;
            left++;
            right--;
        }
        return true;
    }
};


// class Solution {
// public:
//     bool isPalindrome(int x) 
//     {
//         if ( x < 0 || (x % 10 == 0 && x != 0))
//             return false;

//         long half_reversed = 0;
//         while (x > half_reversed)
//         {
//             int digit = x % 10;
//             half_reversed = half_reversed * 10 + digit;
//             x = x / 10;
//         }
//         return half_reversed == x || half_reversed / 10 == x;
//     }
// };
    /*
    x       d      hf
    1234321 1      1
    123432  2      12
    12343   3      123
    1234    4      1234
    123
    */


// class Solution {
// public:
//     bool isPalindrome(int x) 
//     {
//         if (x < 0 || (x % 10 == 0 && x != 0))
//             return false;

//         long reversed = 0;
//         int original = x;

//         while (x > 0)
//         {
//             int digit = x % 10;
//             reversed = reversed * 10 + digit;
//             x = x / 10;
//         }
//         return original == reversed;
//     }
// };
/*
x   r   d   r
121 0   1   1 = 0 + 1
12  1   2   12 = 10 + 2
1   12  1   121 = 120 + 1
*/