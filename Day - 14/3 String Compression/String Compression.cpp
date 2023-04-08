#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        if (chars.size() <= 1)
            return chars.size();

        int i = 0;
        int j = 0;
        int count = 1;

        while (j < chars.size())
        {
            if (j + 1 < chars.size() && chars[j] == chars[j + 1])
            {
                count++;
            }
            else
            {
                chars[i++] = chars[j];
                if (count > 1)
                {
                    string countStr = to_string(count);
                    for (char c : countStr)
                        chars[i++] = c;
                }

                count = 1;
            }

            j++;
        }

        return i;
    }
};

int main(void)
{
    Solution S;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int len = S.compress(chars);

    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << chars[i];
    }
    cout << endl;
}