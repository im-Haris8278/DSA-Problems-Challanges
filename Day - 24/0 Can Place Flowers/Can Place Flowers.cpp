#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int size = flowerbed.size();
        int count = 0;

        for (int i = 0; i < size && count < n; i++)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                count++;
            }
        }

        return count == n;
    }
};

int main()
{
    Solution S;
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    if (S.canPlaceFlowers(flowerbed, n))
    {
        cout << "Yes you can plant flowers.";
    }
    else
    {
        cout << "No you cannot plant flowers.";
    }

    return 0;
}