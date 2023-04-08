class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int m = image.size();
        if (m == 0)
        {
            return image;
        }
        int n = image[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        dfs(image, visited, sr, sc, image[sr][sc], color);
        return image;
    }

    void dfs(vector<vector<int>> &image, vector<vector<bool>> &visited, int i, int j, int oldColor, int newColor)
    {
        if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || visited[i][j] || image[i][j] != oldColor)
        {
            return;
        }
        visited[i][j] = true;
        image[i][j] = newColor;
        dfs(image, visited, i - 1, j, oldColor, newColor);
        dfs(image, visited, i + 1, j, oldColor, newColor);
        dfs(image, visited, i, j - 1, oldColor, newColor);
        dfs(image, visited, i, j + 1, oldColor, newColor);
    }
};