#include<bits/stdc++.h>

using namespace std;


//int p[100];

int DP(int N)
{
    if(N<=1) return N;

    else return DP(N-1)+DP(N-2)+DP(N-3);
}

int main()
{
    int N;
    scanf("%d",&N);
    //p[0]=1;
    printf("%d\n",DP(4));

    return 0;
}
