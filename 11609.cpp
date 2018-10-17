#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int LL;

LL bigMod (LL b, LL p)
{
    if ( p == 0 ) return 1;
    if ( p == 1 ) return b;

    if ( p % 2 == 0 ) {
        LL x = bigMod (b, p / 2) % MOD;
        return (x * x) % MOD;
    }
    else
        return (bigMod (b, p - 1) % MOD) * (b % MOD);
}


int main()
{
    int T;
    LL N;
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%lld",&N);

        printf("Case #%d: %lld\n",i,(N*bigMod(2,N-1))%MOD);
    }
    return 0;
}
