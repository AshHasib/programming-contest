#include<bits/stdc++.h>

using namespace std;


vector <int> G[100];

void BFS(int nodes,int source)
{
    bool visited[nodes+1];
    int distance[nodes+1];

    for(int i=1;i<=nodes;i++)
    {
        visited[i]=false;
        distance[i]=0;
    }

    visited[source]=true;
    distance[source]=0;


    queue<int> Q;
    Q.push(source);

    while(!Q.empty())
    {
        int a=Q.front();
        Q.pop();

        for(int i=0;i<G[a].size();i++)
        {
            int b=G[a][i];

            if(!visited[b])
            {
                visited[b]=true;
                distance[b]=distance[a]+1;
                Q.push(b);
            }
        }
    }

    for(int i=1;i<=nodes;i++)
    {
        printf("%d to %d = %d\n",source,i, distance[i]);
    }
}


int main()
{
    int nodes,edges,source;

    printf("Enter the number of nodes:");
    scanf("%d",&nodes);

    printf("Enter the number of edges:");
    scanf("%d",&edges);

    int a,b;
    printf("Enter edges:");

    for(int i=0;i<edges;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    printf("Enter source:");
    scanf("%d",&source);

    BFS(nodes,source);
    return 0;
}
