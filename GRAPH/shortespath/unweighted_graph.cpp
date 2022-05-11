//shortest path for unweighted graph
//we have to use *bfs* as the min distance from root to the current node is
//equevalent to shortest path of unweighted graph
//tc-
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int dist[N];
// vector<int>visited(n,0);
int n, e;
void bfs(int v, vector<int> &visited)
{

    queue<int> q;
    q.push(v);
    dist[v] = 0;
    // visited[v]=1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : g[node])
        {
           
            if (dist[node] + 1 < dist[it])
            {
                dist[it] = dist[node] + 1;
            
                q.push(it);
              
            }
        }
       
    }
    }

    int main()
    {

        vector<int> visited(n + 1, 0);
        cin >> n >> e;
        for (int i = 1; i <= e; ++i)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; ++i)
        {
            dist[i] = INT_MAX;
        }

        bfs(1, visited);

        for (int i = 1; i <= n; ++i)
            cout << dist[i] << " ";
    }
