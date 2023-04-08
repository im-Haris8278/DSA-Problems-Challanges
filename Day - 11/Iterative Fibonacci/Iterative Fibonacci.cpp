#include <iostream>
using namespace std;

class Solution
{
public:
    int IterativeFibonacci(int n)
    {
        if (n == 0)
            return 0;

        int previousNumber = 0, currentNumber = 1, lastPreviousNumber;

        for (int i = 1; i < n; i++)
        {
            lastPreviousNumber = previousNumber;
            previousNumber = currentNumber;
            currentNumber = previousNumber + lastPreviousNumber;
        }

        return currentNumber;
    }
};

int main()
{
    Solution S;
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    cout << "Fibonacci of " << n << " by Iterative Approach = " << S.IterativeFibonacci(n);

    return 0;
}