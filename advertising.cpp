#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    int m=2,t=2;

    scanf("%d",&N);

    for(int i=1;i<N;i++)
    {

        m+=m>>1;
        t+=m;
    }
    printf("%d\n",t);

    return 0;
}
