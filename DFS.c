#include<stdio.h>
#include<stdlib.h>
void DFS(int **G, int x,int v[],int n)  
{
    if(v[x]==0)
    printf("%d ",x);
    v[x]=1;
        for(int i=1;i<=n;i++)
        {
            if(G[x][i]==1 && v[i]==0)
            {
                DFS(G,i,v,n);
            }
        }
}
int main()
{
    int n;
    printf("Enter No. of vertices:");
    scanf("%d",&n);
    int *arr[n+1];
    int v[n+1];
    for(int i=0;i<=n;i++)
    v[i]=0;
    for(int i=0;i<=n;i++)
    arr[i]=(int*)malloc((n+1)*sizeof(int));
    printf("Enter Adjacency matrix:");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        printf("%d",arr[i][j]);
        printf("\n");
    }
    printf("Depth First Traversal is:\n");
    DFS(arr,1,v,n);
    return 0;
}
