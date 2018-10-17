#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    int T;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);

        if((b+c-1)%a==0)
        {
            printf("%lld\n",a);
        }
        else
        {
            printf("%lld\n",((b+c-1)%a));
        }
    }
    return 0;
}
