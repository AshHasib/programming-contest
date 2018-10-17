#include<bits/stdc++.h>
#define MAX 1000
#define INF 1<<28
using namespace std;


class node
{
public:
    int u;
    int cost;

    node(int a,int c)
    {
        u=a;
        cost=c;
    }

    bool operator <(const node &p) const
    {
        return (p.cost<cost);
    }
};

vector<int>G[MAX];
vector<int>C[MAX];

void dijsktra(int nodes,int source)
{
    int distance[nodes+1];

    for(int i=1;i<=nodes;i++)
    {
        distance[i]=INF;
    }

    priority_queue<node>Q;

    Q.push(node(source,0));
    distance[source]=0;

    while(!Q.empty())
    {
        node top=Q.top();
        Q.pop();
        int u=top.u;
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];

            if(distance[v]>distance[u]+C[u][i])
            {
                distance[v]=distance[u]+C[u][i];
                Q.push(node(v,distance[v]));
            }
        }
    }
    for(int i=1;i<=nodes;i++)
	{
		printf("%d to %d = %d\n",source,i,distance[i]);
	}
}


int main()
{
    freopen("dijsktra.txt","r",stdin);

    int nodes;
    int edges;
    int source;


    scanf("%d",&nodes);
    scanf("%d",&edges);

    int a,b,c;

    for(int i=1;i<=edges;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        G[a].push_back(b);
        G[b].push_back(a);
        C[a].push_back(c);
        C[b].push_back(c);
    }
    //printf("Enter source:");

    scanf("%d",&source);

    dijsktra(nodes,1);

    return 0;
}
