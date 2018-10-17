#include<bits/stdc++.h>
using namespace std;

vector<int> G[1001];

int d[1001]={0};
bool visited[1001]={false};

void dfs(int src,int len)
{
    d[src]=len;
    visited[src]=true;
    for(int i=0;i<G[src].size();i++)
    {
        if(!visited[G[src][i]]){
            dfs(G[src][i],len+1);
        }
    }
}

int main()
{
    int a,b;

    int nodes,edges;



    scanf("%d%d",&nodes,&edges);

    for(int i=1;i<=edges;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    visited[1]=true;

    dfs(1,0);

    for(int i=1;i<=nodes;i++)
    {
        printf("%d to %d = %d\n",1,i,d[i]);
    }
    return 0;
}
