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
    //freopen("input.txt","r",stdin);

    int a,b;

    int nodes;

    scanf("%d",&nodes);

    for(int i=1;i<nodes;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    visited[1]=true;

    dfs(1,0);

    int q;
    scanf("%d",&q);
    int temp;

    //int Q[q];
    int minD=9999;
    int gf;
    for(int i=0;i<q;i++)
    {
        scanf("%d",&temp);
        if(d[temp]<minD)
        {
            minD=d[temp];
            gf=temp;
        }

    }
    printf("%d\n",gf);

    return 0;
}

