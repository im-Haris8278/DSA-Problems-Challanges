#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> inDegree(numCourses, 0);
        unordered_map<int, vector<int>> graph;

        for (auto &pre : prerequisites)
        {
            graph[pre[1]].push_back(pre[0]);
            inDegree[pre[0]]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            numCourses--;
            for (int neighbor : graph[curr])
            {
                if (--inDegree[neighbor] == 0)
                {
                    q.push(neighbor);
                }
            }
        }

        return numCourses == 0;
    }
};

int main()
{
    Solution S;

    vector<vector<int>> prerequisites = {{1, 0}};
    int numCourses = 2;

    if (S.canFinish(numCourses, prerequisites))
    {
        cout << "You Can Finish all Courses" << endl;
    }

    else
    {
        std::cout << "You Cannot Finish all Courses" << endl;
    }

    return 0;
}