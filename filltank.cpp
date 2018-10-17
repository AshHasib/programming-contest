#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m1,m2;

    scanf("%d%d",&m1,&m2);

    int x1=m1*m2;
    int x2=m1+m2;

    int i=2;
    while(i<=x1 ||i<=x2){
        if(x1%i==0 && x2%i==0)
        {
            x1/=i;
            x2/=i;
        }
        else
        {
            i++;
        }
    }

    printf("%d/%d\n",x1,x2);

    return 0;
}
