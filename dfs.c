#include<stdio.h>
#define MAX 5
void dfs(int adj[][MAX],int visited[],int start)
{
	int i,top=-1,stack[MAX];
	visited[start]=1;
	stack[++top]=start;
    printf("%c ",65+start);
	while(top!=-1)
	{
		start=stack[top];
		for(i=0;i<MAX;i++)
			if(adj[start][i]&&!visited[i])
			{
				visited[i]=1;
				stack[++top]=i;
				printf("%c ",i+65);
				break;
			}
		if(i==MAX) top--;
	}
}
int main()
{
	int adj[MAX][MAX],i,j,visited[MAX]={0};
	printf("Enter the adjency matirx\n:");
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			scanf("%d",&adj[i][j]);
	dfs(adj,visited,0);
	return 0;
}
/*0 1 0 1 0
1 0 1 1 0
0 1 0 0 1
1 1 0 0 1
0 0 1 1 0*/
