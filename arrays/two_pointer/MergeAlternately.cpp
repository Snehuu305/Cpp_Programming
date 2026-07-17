#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string result = "";
        int i = 0;
        int j = 0;
        int len1 = word1.length();
        int len2 = word2.length();

        while (i < len1 && j < len2)
        {
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }

        // agar word1 lamba hai, uska bacha hua part append kar do
        while (i < len1)
        {
            result += word1[i];
            i++;
        }

        // agar word2 lamba hai, uska bacha hua part append kar do
        while (j < len2)
        {
            result += word2[j];
            j++;
        }

        return result;
    }
};