//dijkstra algo
tc-o(ElogV)
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>edge[n+1];
            //adj list
     for(int i=0;i<times.size();++i){
         edge[times[i][0]].push_back({times[i][1],times[i][2]});
     }
      priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>>minheap;
        minheap.push({0,k});//{path,node}
        vector<int>distance(n+1,1e5);
        distance[k]=0;
        bool visit[n+1];
        pair<int,int>t;
       memset(visit, false, sizeof(visit));
        while(!minheap.empty()){
            cout<<"enter"<<endl;
           t=minheap.top();
            minheap.pop();
            int u=t.second;
            visit[u]=true;
            for(int i=0;i<edge[u].size();++i){
                //cout<<"enter"<<endl;
                int v=edge[u][i].first;
                int weight=edge[u][i].second;
                  if(visit[v]==false && distance[v] > distance[u] + weight){
                    distance[v] = distance[u] + weight;
                      cout<<distance[v] <<endl;
                    minheap.push(make_pair(distance[v], v));
                }
                
            }
        }
        int res=0;
        for(int i=1;i<distance.size();++i){
            res=max(res,distance[i]);
        }
       if(res==1e5) return -1;
        cout<<res<<endl;
        return res;
    }
};
