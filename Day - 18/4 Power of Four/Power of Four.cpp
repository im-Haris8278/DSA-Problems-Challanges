#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        double log4 = log10(n) / log10(4);
        return (log4 == floor(log4));
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << S.isPowerOfFour(n);

    return 0;
}