#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;

    else return gcd(b,a%b);
}

int phi(int n)
{
    int res=1;

    for(int i=2;i<n;i++)
    {
        if(gcd(n,i)==1)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    int num;

    printf("Enter a number:");

    scanf("%d",&num);

    printf("Phi(%d) = %d\n",num,phi(num));

    return 0;
}
