//ballmanford Algo(single source shortest path)
//TC->O(N-1)*O(E)
//SC-O(N)
#include<stdio.h>
#include<stdlib.h>
#define INF 1e5+10;
struct node{
	int source;
	int destination;
	int weight;
};
int main(){
int total_verteces,total_edges;
printf("\neneter total verteces and edges:\t");
scanf("%d%d",& total_verteces,&total_edges);
struct node edges[total_edges];
int i,j;
for(i=0;i<total_edges;++i){
	int u,v,wt;
	printf("\nenter source,destination and weight:\n\t");
	scanf("%d%d%d",&u,&v,&wt);
	edges[i].source=u;
	edges[i].destination=v;
	edges[i].weight=wt;
	
}
int source_vertex;
printf("\nenetr the source vertex:\t");
scanf("%d",&source_vertex);
int distance[total_verteces]	;
for(i=0;i<total_verteces;++i){
	distance[i]=	INF;
}
distance[source_vertex]=0;
//relax edges for n-1 times
for(i=1;i<=total_verteces-1;++i){
	for(j=0;j<total_edges;++j){
	if(distance[edges[j].source]+edges[j].weight<distance[edges[j].destination]){
		distance[edges[j].destination]=distance[edges[j].source]+edges[j].weight;
	}	
	}
}
//-ve edge detection
int fl=0;
for(j=0;j<total_edges;++j)
{
		if(distance[edges[j].source]+edges[j].weight<distance[edges[j].destination]){
		printf("\nthere is a negative edge cycle\n");
		fl=1;
		break;	
		}
}
printf("\ndistance array is-\n");
for(i=0;i<total_verteces;++i){


printf("%d\t",distance[i]);	
}
printf("\n");
}
