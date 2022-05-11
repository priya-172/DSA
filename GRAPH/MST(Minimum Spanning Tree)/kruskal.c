#include<stdio.h>
#include<stdlib.h>
//const int N=1e5+10;
//time_complexity->O(MlogN)
int parent[100000];
int rank[100000];
struct node{
	int u;
	int v;
	int wt;
};
void bubble_wt(struct node edges[],int e){
	int i,j;
	struct node temp;
	for(i=0;i<e-1;++i){
		for(j=0;j<e-i-1;++j){
			if(edges[j].wt>edges[j+1].wt){
				temp=edges[j];
				edges[j]=edges[j+1];
				edges[j+1]=temp;
			}
		}
	}
}
void make(int n){
	int i;
for(i=0;i<n;++i)
{
	parent[i]=i;
	rank[i]=0;
}
}
int find(int a){
	if(parent[a]==a)
	return a;
	return parent[a]=find(parent[a]);
}
void unionn(int a,int b){
   a=find(parent[a]);
    b=find(parent[b]);
    if(rank[a]<rank[b]){
        parent[a]=b;
    }
     else if(rank[a]>rank[b]){
        parent[b]=a;
    }
    else{
      parent[b]=a;
      rank[a]++ ; 
    }
}
int main(){
	int n,e,i;
	printf("\nenter number total num of vertices:\t");
	scanf("%d",&n);
	printf("\nenter number total num of edges:\t");
	scanf("%d",&e);
	struct node *edges=NULL;
	edges=(struct node*)(calloc(e,sizeof(struct node)));
	for(i=0;i<e;++i){
		printf("\nenter source[%d]:\t",i+1);
		scanf("%d",&edges[i].u);
		printf("\nenter destination[%d]:\t",i+1);
		scanf("%d",&edges[i].v);
		printf("\nenter weight[%d]:\t",i+1);
		scanf("%d",&edges[i].wt);
	}
bubble_wt(edges,e);
make(n);
int cost=0;
for(i=0;i<e;++i){
	if(find(edges[i].u)!=find(edges[i].v)){
		printf("\nsource-\t%d  to destination-\t%d and weight is->\t%d\n",edges[i].u,edges[i].v,edges[i].wt);
		cost+=edges[i].wt;
		unionn(edges[i].u,edges[i].v);
	}
}	
printf(" total min cost is-\t%d",cost)	;
}
