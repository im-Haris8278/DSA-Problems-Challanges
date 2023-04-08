#include <iostream>
using namespace std;

int BinarySearch(int A[], int targetNum, int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == targetNum)
        {
            cout << mid;
            break;
        }
        else if (A[mid] < targetNum)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int targetNum = 5, n = 9;
    cout << "Enter the Target Number: ";
    cin >> targetNum;

    BinarySearch(A, targetNum, n);

    return 0;
}