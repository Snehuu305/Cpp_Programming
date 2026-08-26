#include <string>
using namespace std;

class CountBinarySubstring
{
public:
    int countBinarySubstrings(string s)
{
        int totalCount = 0;
        int currentRunLength = 1;
        int previousRunLength = 0;
        for (int i = 1; i < s.length(); i++)
            {
            if (s[i] == s[i - 1])
            {
                currentRunLength = currentRunLength + 1;
            }
            else
            {
                previousRunLength = currentRunLength;
                currentRunLength = 1;
            }
            if (previousRunLength != 0) {
                totalCount += min(previousRunLength, currentRunLength);
            }
        }
        return totalCount;
    }
};
