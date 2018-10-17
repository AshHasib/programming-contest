#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

int numDigits(int N)
{
    int counter=0;
    while(N!=0)
    {
        N/=10;
        counter++;
    }
    return counter;
}

int main()
{
    //freopen("input.txt","r",stdin);

    int T;
    LL N;
    vector<int>digits;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%lld",&N);
        int n=0;
        int original=N;

        while(N>0)
        {
            N/=10;
            n++;
        }

        N=original;

        while(N>0)
        {
            int digit=N%10;
            original=original - pow(digit,n);
            N/=10;
        }

        if(original==0)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
