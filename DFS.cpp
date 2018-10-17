#include<bits/stdc++.h>
#define WHITE 0
#define GREY 1
#define BLACK 2
#define MAX 1000
using namespace std;

vector<int>G[MAX];

int color[MAX];
int dTime[MAX];
int fTime[MAX];
int curTime=0;
void DFS(int u)
{
    curTime=curTime+1;
    color[u]=GREY;
    dTime[u]=curTime;

    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(color[v]==WHITE)
        {
            DFS(v);
        }
    }

    curTime+=1;
    fTime[u]=curTime;
    color[u]=BLACK;
    //return;
}

int main()
{
    freopen("DFS.txt","r",stdin);

    int nodes;
    int edges;
    int source;
    //printf("Enter the number of nodes:");
    scanf("%d",&nodes);

    //printf("Enter the number of edges:");
    scanf("%d",&edges);
    //printf("Enter edges:");
    for(int i=1;i<=edges;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    //printf("Enter source:");
    scanf("%d",&source);

    for(int i=1;i<=nodes;i++)
    {
        color[i]=WHITE;
    }

    DFS(source);
    printf("Node\tDis. Time\tEnding Time\n");
    for(int i=1;i<=nodes;i++)
    {
        printf("%d\t%d\t\t%d\n",i,dTime[i],fTime[i]);
    }
    return 0;
}
