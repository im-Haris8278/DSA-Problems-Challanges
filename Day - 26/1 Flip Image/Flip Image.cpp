#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        for (int i = 0; i < image.size(); i++)
        {
            reverse(image[i].begin(), image[i].end());

            for (int j = 0; j < image.size(); j++)
            {
                image[i][j] ^= 1;
            }
        }

        return image;
    }
};

int main()
{
    Solution S;
    vector<vector<int>> image = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};
    vector<vector<int>> result = S.flipAndInvertImage(image);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}