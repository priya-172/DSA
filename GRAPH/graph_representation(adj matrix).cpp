//adjacency matrix
//tc-o(n)
//space c-o(n*n)//2D matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
 int v,e;
cin>>v>>e;
//declare adjacency matrix
int adj[v+1][v+1];//as it is 1 based indexing
//take input each edges
for(int i=1;i<=e;++i){
    int u,v;
    cin>>u>>v;
    //undirected graph
    adj[u][v]=1;
    adj[v][u]=1;
}
return 0;
}
