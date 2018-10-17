#include<bits/stdc++.h>
#define MAX 100
#define INF 3<<20
using namespace std;


floydWarshall(int nodes,int G[][MAX])
{
    for(int k=1;k<=nodes;k++)
    {
        for(int i=1;i<=nodes;i++)
        {
            for(int j=1;j<=nodes;j++)
            {
                G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
            }
        }
    }
}

int main()
{
    int nodes,edges;

    printf("Enter the number of nodes and edges:");
    scanf("%d%d",&nodes,&edges);

    int G[MAX][MAX];

    for(int i=1;i<=nodes;i++)
    {
        for(int j=1;j<=nodes;j++)
        {
            if(i==j) G[i][j]=0;
            else G[i][j]=INF;
        }
    }

    printf("Enter edges with their costs:\n");
    for(int i=1;i<=edges;i++)
    {
        int u,v,c;
        scanf("%d%d%d",&u,&v,&c);
        G[u][v]=c;
    }

    floydWarshall(nodes,G);


    printf("All pair shortest paths:\n");
    for(int i=1;i<=nodes;i++)
    {
        for(int j=1;j<=nodes;j++)
        {
            if(G[i][j]==INF)
            {
                printf("INF\t");
                continue;
            }
            printf("%d\t",G[i][j]);
        }
        printf("\n");
    }
    return 0;
}
