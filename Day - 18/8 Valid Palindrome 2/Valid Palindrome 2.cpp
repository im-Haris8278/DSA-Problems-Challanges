#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }

    bool isPalindrome(string s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main()
{
    Solution S;
    string s;
    cout << "Enter a String: ";
    cin >> s;
    if (S.validPalindrome(s))
    {
        cout << s << " is Palindrome." << endl;
    }
    else
    {
        cout << s << " is not Palindrome." << endl;
    }

    return 0;
}