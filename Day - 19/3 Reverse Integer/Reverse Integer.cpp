#include <iostream>
#include <limits.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int result = 0;
        while (x != 0)
        {
            int digit = x % 10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
            {
                return 0;
            }
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8))
            {
                return 0;
            }
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << S.reverse(n);

    return 0;
}