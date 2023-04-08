#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            if (!isVowel(s[left]))
            {
                left++;
            }
            else if (!isVowel(s[right]))
            {
                right--;
            }
            else
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main()
{
    Solution S;
    string s;
    cout << "Enter a String: ";
    cin >> s;
    cout << "Reversed String is: " << S.reverseVowels(s);

    return 0;
}