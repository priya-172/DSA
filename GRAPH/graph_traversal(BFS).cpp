//graph traversal-bfs
//time complexity-o(v+e)
#include<bits/stdc++.h>
using namespace std;
void bfs(int source,int v,vector<int> adj[]){
queue<int>q;
vector<int>visited(v,0);
q.push(source);
visited[source]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<endl;
    for(auto it:adj[node]){
        if(!visited[it]){
            q.push(it);
            visited[it]=1;
        }
    }
}
}
int main(){
 int  v,e;
 cin>>v>>e;
 vector<int>adj[v+1];
 for(int i=0;i<e;++i){
     int u,v;
     cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
 } 
bfs(1,v+1,adj);
}
