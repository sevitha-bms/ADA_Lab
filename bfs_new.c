#include<stdio.h>
void bfs(int);
int a[10][10],vis[10],n;
int main()
{
 int i,j,start;
 printf("\nEnter the number of vertices:");
 scanf("%d",&n);
 printf("\nEnter the starting node:");
 scanf("%d",&start);
 printf("\nEnter the adjacency matrix:");
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
     scanf("%d",&a[i][j]);
   }
 }
 for(i=1;i<=n;i++)
 {
   vis[i]=0;
 }
 bfs(start);
 return 0;
}

void bfs(int v)
{
 int q[10],f=0,r=0,u,i;
 vis[v]=1;
 q[r]=v;
 printf("\nNodes reachable from node %d:",v);
 while(f<=r)
 {
    u=q[f];
    printf("%d\t",u);
   for(i=1;i<=n;i++)
   {
     if(a[u][i]==1&&vis[i]==0)
     {
       r=r+1;
       q[r]=i;
       vis[i]=1;
     }

    }
    f=f+1;
 }
}
