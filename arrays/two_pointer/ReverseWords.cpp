#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s) {
        
        int i = 0;
        int j = 0;
        while (j < s.length()) {
            if (s[j] != ' ') {
                j++;
            }
            else {
                SwapWord(s, i, j - 1);
                j++;
                i = j;
            }
        }
        SwapWord(s, i, j - 1);
        return s;
    }

    void SwapWord(string &str, int i, int k) {
        while (i < k) {
            char temp = str[i];
            str[i] = str[k];
            str[k] = temp;
            i++;
            k--;
        }
    }
};