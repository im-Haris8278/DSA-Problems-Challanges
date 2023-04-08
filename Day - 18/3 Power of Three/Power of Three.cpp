#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        double log3 = log10(n) / log10(3);
        return (log3 == floor(log3));
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << S.isPowerOfThree(n);

    return 0;
}