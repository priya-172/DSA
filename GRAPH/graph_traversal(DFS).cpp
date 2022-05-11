//graph traversal-DFS
//tc-O(v+e)
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 int node,edge;
vector<int>adj[N];
bool visited[N];
void dfs(int vertex){
    cout<<vertex<<endl;
visited[vertex]=true;
for(auto it:adj[vertex]){
    if(!visited[it]) dfs(it);
}
}
int main(){
    cin>>node>>edge;
    for(int i=1;i<=edge;++i){
        int u,v;
        cin>>u>>v;
 adj[u].push_back(v);
  adj[v].push_back(u);
    }
for(int i=1;i<=node;++i){
    if(visited[i]) continue;
dfs(i);
}
}
