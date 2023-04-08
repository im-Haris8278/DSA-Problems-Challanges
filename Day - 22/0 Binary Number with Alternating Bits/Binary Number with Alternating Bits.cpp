#include <iostream>
using namespace std;

class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        int prevBit = n % 2;
        n /= 2;
        while (n > 0)
        {
            int currBit = n % 2;
            if (currBit == prevBit)
            {
                return false;
            }
            prevBit = currBit;
            n /= 2;
        }
        return true;
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (S.hasAlternatingBits(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}