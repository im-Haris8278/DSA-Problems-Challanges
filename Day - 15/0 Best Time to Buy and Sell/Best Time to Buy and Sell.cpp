#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;

        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices[i] < prices[i + 1])
                maxProfit += prices[i + 1] - prices[i];
        }

        return maxProfit;
    }
};

int main(void)
{
    Solution S;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << S.maxProfit(prices);

    return 0;
}