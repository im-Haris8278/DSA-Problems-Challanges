#include <iostream>
using namespace std;

class Solution
{
public:
    int RecursiveFibonacci(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        return RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2);
    }
};

int main()
{
    Solution S;
    int n;

    cout << "Enter a Number: ";
    cin >> n;

    cout << "\nFibonacci of " << n << " by Recursive Fibonacci = " << S.RecursiveFibonacci(n);

    return 0;
}