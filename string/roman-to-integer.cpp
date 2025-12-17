class Solution {
public:
    int romanToInt(string s) 
    {
        
        int a = 1 = 'I';
        int b = 5 = 'V';
        int c = 10 = 'X';
        int d = 50 = 'L';
        int e = 100 = 'C';
        int f = 500 = 'D';
        int g = 1000 = 'M';

        for (auto c : s)
        {
           switch(c)
           {
                case 0: if (c == 'I') return 1; break;
                case 0: if (c == 'I') return 1; break;
                case 0: if (c == 'I') return 1; break;
                case 0: if (c == 'I') return 1; break;
                case 0: if (c == 'I') return 1; break;
           }
        }

        return s;
    }
};