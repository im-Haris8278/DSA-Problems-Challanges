#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                stk.push(c);
            }
            else if (c == ')' & !stk.empty() && stk.top() == '(')
            {
                stk.pop();
            }
            else if (c == '}' & !stk.empty() && stk.top() == '{')
            {
                stk.pop();
            }
            else if (c == ']' & !stk.empty() && stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }

        return stk.empty();
    }
};

int main()
{
    Solution S;
    string s = "{[()]}{}[]";
    if (S.isValid(s))
    {
        cout << s << " is Valid Parantheses." << endl;
    }
    else
    {
        cout << s << " is Invalid Parantheses." << endl;
    }

    return 0;
}