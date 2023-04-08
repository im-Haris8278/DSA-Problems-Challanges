#include <iostream>
#include <vector>
using namespace std;

int Fibonacci(vector<int> &memo, int n)
{
    if (memo[n] != -1)
    {
        return n;
    }

    int result;

    if (n <= 1)
    {
        return 0;
    }
    else
    {
        result = Fibonacci(memo, n - 1) + Fibonacci(memo, n - 2);
    }

    memo[n] = result;

    return result;
}

int main()
{
    int n;
    vector<int> memo(n + 1, -1);
    cout << "Enter a Number: ";
    cin >> n;

    cout << Fibonacci(memo, n);

    return 0;
}