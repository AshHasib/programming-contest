#include<bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    scanf("%d",&N);

    int i,sum=0;

    int A[N];

    for(i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    int cur=0;
    int loc=0;
    for(i=1;i<=N;i++)
    {
        cur+=A[i];
        if(cur*2>=sum)
        {
            loc=i;
            break;
        }
    }

    printf("%d\n",loc);

    return 0;
}
