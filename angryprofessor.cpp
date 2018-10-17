
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int N,K;

    scanf("%d",&T);

    while(T--)
    {
        int early=0;

        scanf("%d%d",&N,&K);

        int S[N+1];

        for(int i=0;i<N;i++)
        {
            scanf("%d",&S[i]);
            if(S[i]<=0)
            {
                early++;
            }
        }
        if(early<K) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
