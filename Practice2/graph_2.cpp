#include <bits/stdc++.h>
using namespace std;
class graph
{
    map<int, vector<int>> mp;

public:
    void add(int x, int y)
    {
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    void bfs(int src)
    {
        map<int, int> visited;
        queue<int> q;
        cout << src << " ";
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto x : mp[node])
            {
                if (!visited[x])
                {
                    cout << x << " ";
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
};
int main()
{
    graph t;
    t.add(1, 0);
    t.add(1, 2);
    t.add(2, 3);
    t.add(3, 0);
    t.add(3, 4);
    t.add(4, 5);
    t.bfs(0);
}
