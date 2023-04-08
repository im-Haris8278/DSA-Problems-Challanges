class Solution
{
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>> &paths)
    {
        vector<vector<int>> adj(n + 1);
        for (auto &path : paths)
        {
            adj[path[0]].push_back(path[1]);
            adj[path[1]].push_back(path[0]);
        }

        vector<int> colors(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            vector<bool> used(5, false);
            for (auto neighbor : adj[i])
            {
                used[colors[neighbor]] = true;
            }

            for (int c = 1; c <= 4; c++)
            {
                if (!used[c])
                {
                    colors[i] = c;
                    break;
                }
            }
        }

        vector<int> result;
        for (int i = 1; i <= n; i++)
        {
            result.push_back(colors[i]);
        }

        return result;
    }
};