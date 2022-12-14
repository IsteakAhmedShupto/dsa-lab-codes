#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
typedef long long int ll;

using namespace std;
map<int, int> visited;
map<int, int> level;
vector<int> vec[100];

int BFS(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    level[start] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < vec[u].size(); i++)
        {
            int v = vec[u][i];
            if (!visited[v])
            {
                q.push(v);
                visited[v] = 1;
                level[v] = level[u] + 1;
            }
        }
    }
}
int main()
{
    freopen("in.txt", "r", stdin);
    int node, edge;
    cin >> node;
    int a, b;
    while (cin >> a >> b)
    {
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    BFS(1);
    for (int i = 1; i <= node; i++)
        cout << i << " : " << level[i] << endl;
}