#include<stdio.h>
#include<conio.h>
int vis[10],cost[10][10],dest[10];
int n,src;
void dijktras()
{
int i,count,min,u;
for(i=1;i<=n;i++)
{
  dest[i]=cost[src][i];
}
vis[src]=1;
count=1;
while(count<n)
{
    min=999;
    for(i=1;i<=n;i++)
    {
        if(dest[i]<min && vis[i]==0)
        {
            min=dest[i];
            u=i;
        }
    }
    vis[u]=1;
    for(i=1;i<=n;i++)
    {
        if(dest[u]+cost[u][i]<dest[i] && vis[i]==0)
        {
            dest[i]=dest[u]+cost[u][i];
        }
        count++;
        printf("%d -> %d=%d\n",src,i,dest[i]);
    }
}

}
void main()
{
    int i,j;
    printf("enter the no of vetices:");
    scanf("%d",&n);
    printf("\nEnter the cost matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }
    printf("\n enter the source vertex:");
    scanf("%d",&src);
    dijktras();
    getch();
}
