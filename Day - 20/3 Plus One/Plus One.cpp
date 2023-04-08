#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int carry = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }

        if (carry > 0)
        {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};

int main()
{
    Solution S;
    vector<int> digits1 = {1, 2, 3};
    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> digits3 = {9, 9, 9};

    vector<int> result1 = S.plusOne(digits1);
    vector<int> result2 = S.plusOne(digits2);
    vector<int> result3 = S.plusOne(digits3);

    for (int digit : result1)
    {
        cout << digit << " ";
    }
    cout << endl;

    for (int digit : result2)
    {
        cout << digit << " ";
    }
    cout << endl;

    for (int digit : result3)
    {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}