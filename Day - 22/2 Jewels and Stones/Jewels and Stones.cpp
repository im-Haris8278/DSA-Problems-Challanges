#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewel(jewels.begin(), jewels.end());
        int count = 0;
        for (int stone : stones)
        {
            if (jewel.count(stone))
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution S;
    string jewels, stones;
    cout << "Enter Amount of Jewels: ";
    cin >> jewels;
    cout << "Enter Amount of Stones: ";
    cin >> stones;

    cout << S.numJewelsInStones(jewels, stones);

    return 0;
}