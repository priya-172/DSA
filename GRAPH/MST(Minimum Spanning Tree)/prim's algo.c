//prim's algo
//take the min from the adj vertices
#include<stdio.h>
#include<limits.h>
int main(){
	int	total_weight=0;
	int i,j,k;
	int verteces,edges;
	printf("\nenter total number of verteces and edges:\t");
	scanf("%d%d",&vertces,&edges);
	int edge[verteces][verteces];
	  for (i = 0; i <verteces ; i++)
    {
        for (j = 0; j <verteces ; j++)
            edge[i][j] = 0;
    }
	for(i=0;i<edges;++i){
	int u,v,wt;
	scanf("%d%d%d",&u,&v,&wt);
	edge[u][v]=wt;
}
int parent[verteces];
int key[verteces];
int visited[verteces];	
for(i=0;i<verteces;++i){
	key[i]=INT_MAX;
	parent[i]=-1;
	visited[i]=0;
}
key[0]=0;
parent[0]=-1;
//find min key array go on the adj repeat n-1 time
for(i=0;i<verteces-1;++i){
	int mini=INT_MAX,source;
	for(j=0;j<verteces;++j){
		if(!visited[j] && key[i]<mini){
			mini=key[i];
			source=i;
			visited[source]=1;
		}
	}

for(k=0;k<verteces;++k){
	if(!visited[k] && edge[source][k]<key[k] && edge[source][k]!=0){
		  key[k] = edge[source][k];
            parent[k] = source;
            total_weight += edge[source][k];
            printf("\n%d to %d weight is-\t%d\n ",k,parent[k],key[k]);
	}
}
	
}
printf("\ntotal weight is-\t%d",	total_weight);
}
