#include <iostream>
using namespace std;

class Solution
{
public:
    bool isBadVersion(int version)
    {
        int bad_version = 4;
        return version >= bad_version;
    }

    int firstBadVersion(int n)
    {
        int left = 1, right = n;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{
    Solution S;
    int n = 5;
    int firstBad = S.firstBadVersion(n);
    cout << "The First Bad Version is: " << firstBad << endl;

    return 0;
}