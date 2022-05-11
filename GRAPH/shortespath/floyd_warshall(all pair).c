//flyod warshall(all pair shortest path)
//iterate every level and find the min distance
//tc-
#include<stdio.h>
#include<limits.h>
#define INF 1e5+10;
int dist[100][100];
int main(){
	int verteces,edges;
	printf("\nenter total number of verteces and edges:\t");
	scanf("%d%d",&verteces,&edges);
	int i,j,k;
	//int dist[ verteces+1];
for(i=0;i<verteces;++i){
	for(j=0;j<verteces;++j){
	if(i==j){
		dist[i][j]=0;
	}
	else{
		dist[i][j]=INT_MAX;
	}	
	}
}
for(i=0;i<edges;++i){
	int u,v,wt;
	scanf("%d%d%d",&u,&v,&wt);
	dist[u][v]=wt;
}
//iterate through k levels and calculate the min distance
for(k=0;k<verteces;++k){
	for(i=0;i<verteces;++i){
		for(j=0;j<verteces;++j){
			if(dist[i][k]==INT_MAX || dist[k][j]==INT_MAX|| i==j) continue;
			if(dist[i][j]>dist[i][k]+dist[k][j]){
				dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
}
	for(i=0;i<verteces;++i){
		for(j=0;j<verteces;++j){
			if(dist[i][j]==INT_MAX){
				printf("I\t");
			}else{
				printf("%d\t",dist[i][j]);
			}
		}
		printf("\n");
	}
}
