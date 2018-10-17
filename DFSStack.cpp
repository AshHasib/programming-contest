#include<bits/stdc++.h>

using namespace std;


//maximum 1000 nodes
vector<int>G[1000];
int D[1002]={0};
bool visited[1002]={false};
bool pushed[1002]={false};

void DFS(int src)
{
    stack <int> S;

    S.push(src);
    pushed[src]=true;
    while(!S.empty())
    {
        int a=S.top();
        S.pop();


        if(!visited[a])
        {
            visited[a]=true;
            printf("Now visited : %d\n",a);
        }

        for(int i=G[a].size()-1;i>=0;i--)
        {
            int b=G[a][i];

            if(!pushed[b])
            {
                S.push(b);
                pushed[b]=true;
                printf("Now pushed %d in the stack\n",b);
            }
        }
    }

}


int main()
{

    //freopen("input.txt","r",stdin);
    int nodes,edges;

    int a,b;

    scanf("%d%d",&nodes,&edges);

    for(int i=0;i<edges;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    DFS(1);

//    for(int i=1;i<=nodes;i++)
//    {
//        printf("d to %d = %d\n",1,i,D[i]);
//    }

    return 0;
}
