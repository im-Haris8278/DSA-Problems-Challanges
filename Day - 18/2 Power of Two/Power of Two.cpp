#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        double log2 = log10(n) / log10(2);
        return (log2 == floor(log2));
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << S.isPowerOfTwo(n);

    return 0;
}