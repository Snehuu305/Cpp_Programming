class Solution {
public:
    int firstMatchingIndex(string s) {
        
        int i = 0;
        int k = s.length() - i - 1;

        while (i <= k)
        {
            k = s.length() - i - 1;
            if (s[i] == s[k])
            {
                return i;
            }
            i++;
        }

        return -1;
    }
};