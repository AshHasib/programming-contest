#include<bits/stdc++.h>

using namespace std;

int bigMod(int b,int p,int m)
{
    if(p==0) return 1;

    else if(p%2==0)
    {
        int a=bigMod(b,p/2,m);

        return (a*a)%m;
    }
    else
    {
        int x=b%m;
        int y=bigMod(b,p-1,m);
        return (x*y)%m;
    }
}


int main()
{
    int b,p,m;

    scanf("%d %d %d",&b,&p,&m);

    printf("%d\n",bigMod(b,p,m));

    return 0;
}
