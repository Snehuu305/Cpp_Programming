#include <string>
#include <cctype>
using namespace std;

class ReverseOnlyLetters
{
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            char leftChar = s[left];
            char rightChar = s[right];
            if (isalpha(leftChar) == false) {
                left = left + 1;
            }
            else if (isalpha(rightChar) == false) {
                right = right - 1;
            }
            else {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left = left + 1;
                right = right - 1;
            }
        }
        return s;
    }
};