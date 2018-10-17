#include<bits/stdc++.h>
#define MAX 1000
#define WHITE 0
#define GREY 1
#define BLACK 2

using namespace std;

vector<int>G[MAX];

int curTime=0;
int dTime[MAX];
int fTime[MAX];
int visited[MAX];

void DFS(int u)
{
    curTime+=1;
    dTime[u]=curTime;
    visited[u]=GREY;

    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(visited[v]==WHITE)
        {
            DFS(v);
        }
    }
    curTime+=1;
    fTime[u]=curTime;
    visited[u]=BLACK;
}


int main()
{
    freopen("DFS2.txt","r",stdin);
    int nodes,edges,a,b;
    int source;

    //printf("Enter number of nodes:");
    scanf("%d",&nodes);
    //printf("Enter the number of edges:");
    scanf("%d",&edges);

   // printf("Enter edges:");
    for(int i=1;i<=edges;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    //printf("Enter source:");
    scanf("%d",&source);

    for(int i=1;i<=nodes;i++)
    {
        visited[i]=WHITE;
    }

    DFS(source);
    printf("Node\tD.Time\t\tF.Time\n");
    for(int i=1;i<=nodes;i++)
    {
        printf("%d\t%d\t\t%d\n",i,dTime[i],fTime[i]);
    }
    return 0;
}


