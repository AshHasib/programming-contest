#include<bits/stdc++.h>

using namespace std;

int rev(int num)
{
    int temp;
    int r=0;

    while(num!=0)
    {
        r=r*10;
        r=r+(num%10);
        num/=10;

    }
    return r;
}


int main()
{
    int a,b,k;

    scanf("%d%d%d",&a,&b,&k);
    int counter=0;
    for(int i=a;i<=b;i++)
    {
        if((i-rev(i))%k==0)
        {
            counter++;
        }
    }

    printf("%d\n",counter);

    return 0;
}
