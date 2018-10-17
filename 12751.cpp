#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("input.txt","r",stdin);

    int T;
    scanf("%d",&T);

    int N,K,X;

    for(int i=1;i<=T;i++)
    {
        scanf("%d%d%d",&N,&K,&X);

        int tot=(N*(N+1))/2;

        int removed=X*K + (K*K)/2 - K/2;

        printf("Case %d: %d\n", i , tot-removed);
    }
    return 0;
}
