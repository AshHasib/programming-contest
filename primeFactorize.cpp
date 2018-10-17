#include<bits/stdc++.h>

using namespace std;


int phi(int N)
{
    vector <int> V;

    while(N%2==0)
    {
        V.push_back(2);
        N/=2;
    }

    for(int i=3;i<=sqrt(N);i+=2)
    {
        if(N%i==0)
        {
            V.push_back(i);
            N/=i;
        }
    }
    if(N>2)
    {
        V.push_back(N);
    }

    int sum=1;
    for(int i=0;i<V.size();i++)
    {
        sum*=(V[i]-1);
    }

    return sum;
}

int main()
{
    int N;

    scanf("%d",&N);

    int n=phi(N);

    printf("%d\n",n);
    return 0;
}
