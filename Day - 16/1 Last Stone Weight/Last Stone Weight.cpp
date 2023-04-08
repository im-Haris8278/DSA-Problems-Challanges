#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        while (stones.size() > 1)
        {
            std::sort(stones.begin(), stones.end());
            int n = stones.size();
            int x = stones[n - 1], y = stones[n - 2];
            if (x == y)
            {
                stones.resize(n - 2);
            }
            else
            {
                stones[n - 2] = x - y;
                stones.resize(n - 1);
            }
        }
        return stones.size() > 0 ? stones[0] : 0;
    }
};

int main()
{
    Solution S;
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    int result = S.lastStoneWeight(stones);

    cout << "The Last Stone Weight is: " << result << endl;

    return 0;
}