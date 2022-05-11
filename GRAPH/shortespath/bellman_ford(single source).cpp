//bellman ford(single source shortest path)
//travese the edges and relax it for n-1 time
//tc-O(n-1)*O(e)
#include<bits/stdc++.h>
using namespace std;
struct node{
int u;
int v;
int wt;
node(int first,int second,int weight){
    u=first;
    v=second;
    wt=weight;
}
};
int main(){
int inf=10e5;

int n,e,source=0;
cin>>n>>e;
vector<node>edge;
vector<int>dis(n,inf);
for(int i=0;i<e;++i){
    int u,v,wt;
    cin>>u>>v>>wt;
   edge.push_back(node(u,v,wt));
}
dis[source]=0;
for(int i=1;i<=n-1;++i){
    for(auto j:edge){
        if(dis[j.u]+dis[j.wt]<dis[j.v]){
            dis[j.v]=dis[j.u]+dis[j.wt];
        }
    }
}
for(int i=0;i<n;++i){
    cout<<dis[i]<<" ";
}
return 0;
}
