//tc-o(n)
//sc-o(n+2e)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,e;
    vector<int>adj[v+1];//v+1 size array-->at evrey index a vector is stored
    for(int i=0;i<e;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
