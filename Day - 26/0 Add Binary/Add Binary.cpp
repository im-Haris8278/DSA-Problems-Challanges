#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result = "";
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0)
            {
                sum += b[j] - '0';
                j--;
            }

            result += to_string(sum % 2);
            carry = sum / 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution S;
    string a, b;
    cout << "Enter First Binary Digit: ";
    cin >> a;
    cout << "Enter Second Binary Digit: ";
    cin >> b;
    cout << S.addBinary(a, b) << endl;

    return 0;
}