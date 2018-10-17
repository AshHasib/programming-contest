#include<bits/stdc++.h>

using namespace std;

vector<int>G[100];

bool isBipartite(int n,int s)
{
    bool visited[n+1];
    bool color[n+1];

    for(int i=1;i<=n;i++)
    {
        visited[i]=false;
        color[i]=false;
    }
    visited[s]=true;
    color[s]=true;

    queue<int>Q;
    Q.push(s);

    while(!Q.empty())
    {
        int a=Q.front();
        Q.pop();

        for(int i=0;i<G[a].size();i++)
        {
            int b=G[a][i];

            if(!visited[b])
            {
                visited[b]=false;
                color[b]=!color[a];
                Q.push(s);
            }
            else if(color[a]==color[b])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int nodes,edges,a,b;

    printf("Enter the number of nodes:");
    scanf("%d",&nodes);

    printf ("Enter the number of edges:");
    scanf("%d",& edges);

    printf("Enter edges:\n");
    for(int i=1;i<=edges;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    if(isBipartite(nodes,1))
    {
        printf("The graph is bipartite\n");
    }
    else
    {
        printf("The graph is not bipartite\n");
    }
    return 0;
}
