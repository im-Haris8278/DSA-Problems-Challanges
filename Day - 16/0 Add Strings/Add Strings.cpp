#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string AddStrings(string num1, string num2)
    {
        int carry = 0, sum = 0;
        string result;
        int i = num1.length() - 1, j = num2.length() - 1;

        while (i >= 0 || j >= 0 || carry != 0)
        {
            int n1 = i >= 0 ? num1[i] - '0' : 0;
            int n2 = j >= 0 ? num2[j] - '0' : 0;
            sum = n1 + n2 + carry;
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution S;
    string num1, num2, result;

    cout << "Enter Number String 1: ";
    cin >> num1;

    cout << "Enter Number String 2: ";
    cin >> num2;

    result = S.AddStrings(num1, num2);

    cout << result << endl;

    return 0;
}