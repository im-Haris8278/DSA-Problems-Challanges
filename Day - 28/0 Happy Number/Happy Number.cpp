#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        int slow = n;
        int fast = n;

        while (true)
        {
            slow = CS(slow);
            fast = CS(CS(fast));

            if (fast == 1)
            {
                return true;
            }

            if (slow == fast)
            {
                return false;
            }
        }
    }

    int CS(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }
};

int main()
{
    Solution S;
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (S.isHappy(n))
    {
        cout << n << " is a Happy Number." << endl;
    }
    else
    {
        cout << n << " is not a Happy Number." << endl;
    }

    return 0;
}