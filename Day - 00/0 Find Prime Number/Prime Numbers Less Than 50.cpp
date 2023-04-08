#include <iostream>
using namespace std;
static void prime(int Num)
{
    int n = 0;
    for (int i = 2; i < (Num / 2 + 1); i++)
    {
        if (Num % i == 0)
        {
            n++;
            break;
        }
    }
    if (n == 0)
    {
        cout << Num << " ";
    }
}

int main()
{
    cout << "Prime numbers less than " << 50 << " are: "
         << "\n";
    for (int i = 1; i < 50 + 1; i++)
    {
        prime(i);
    }
    return 0;
}